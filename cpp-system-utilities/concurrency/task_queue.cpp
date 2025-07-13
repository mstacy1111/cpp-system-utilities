#include <iostream>
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <functional>
#include <vector>
#include <atomic>

class TaskQueue {
public:
    TaskQueue(size_t numThreads) : stop(false) {
        for (size_t i = 0; i < numThreads; ++i)
            workers.emplace_back(&TaskQueue::worker, this);
    }

    ~TaskQueue() {
        {
            std::unique_lock<std::mutex> lock(mutex);
            stop = true;
        }
        condVar.notify_all();
        for (std::thread &worker : workers)
            worker.join();
    }

    void enqueue(std::function<void()> task) {
        {
            std::unique_lock<std::mutex> lock(mutex);
            tasks.push(task);
        }
        condVar.notify_one();
    }

private:
    void worker() {
        while (true) {
            std::function<void()> task;
            {
                std::unique_lock<std::mutex> lock(mutex);
                condVar.wait(lock, [this]{ return stop || !tasks.empty(); });
                if (stop && tasks.empty()) return;
                task = std::move(tasks.front());
                tasks.pop();
            }
            task();
        }
    }

    std::vector<std::thread> workers;
    std::queue<std::function<void()>> tasks;
    std::mutex mutex;
    std::condition_variable condVar;
    std::atomic<bool> stop;
};
