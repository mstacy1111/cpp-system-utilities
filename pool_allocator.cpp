#include <iostream>
#include <vector>
#include <cstdlib>

class PoolAllocator {
public:
    PoolAllocator(size_t blockSize, size_t blockCount)
        : blockSize(blockSize), blockCount(blockCount) {
        pool = malloc(blockSize * blockCount);
        for (size_t i = 0; i < blockCount; ++i) {
            freeBlocks.push_back((char*)pool + i * blockSize);
        }
    }

    ~PoolAllocator() {
        free(pool);
    }

    void* allocate() {
        if (freeBlocks.empty()) return nullptr;
        void* ptr = freeBlocks.back();
        freeBlocks.pop_back();
        return ptr;
    }

    void deallocate(void* ptr) {
        freeBlocks.push_back((char*)ptr);
    }

private:
    void* pool;
    size_t blockSize, blockCount;
    std::vector<char*> freeBlocks;
};
