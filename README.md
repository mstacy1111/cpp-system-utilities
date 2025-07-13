---

```markdown
# cpp-system-utilities

**High-Performance C++ System Utilities and Tools**  
A collection of system-level utilities demonstrating deep expertise in C/C++ programming, memory management, concurrency, and networking. Built for performance, clarity, and extensibility.

---

## 🧠 Overview

This repository showcases:

- Custom memory allocation strategies
- Thread-safe task scheduling and synchronization
- Low-level socket communication and basic HTTP parsing

It is designed to demonstrate systems programming proficiency for freelance roles, professional portfolios, and opportunities such as AI infrastructure engineering.

---

## 📦 Features

### 1. Custom Memory Allocator
A custom malloc/free implementation using pool allocation and memory blocks. Optimized for speed and low fragmentation in long-running applications.

- Pool-based block allocation
- Minimal fragmentation
- Faster than system malloc for small objects

### 2. Multi-threaded Task Queue
A thread-safe producer-consumer system implemented using:

- `std::thread` for worker threads  
- `std::mutex` and `std::condition_variable` for synchronization  
- Graceful shutdown and dynamic workload management

Use-case: Ideal for background processing, job systems, or lightweight thread pools.

### 3. Network Utility Toolkit
Includes two modules:

- **TCP Echo Server/Client:** Raw socket implementation using C++
- **Basic HTTP Parser:** Line-by-line parsing of HTTP requests

---

## 📂 Project Structure

```

cpp-system-utilities/
├── allocator/             # Custom memory allocator
│   └── pool\_allocator.cpp
├── concurrency/           # Multi-threaded task queue
│   └── task\_queue.cpp
├── networking/            # TCP and HTTP utility tools
│   ├── tcp\_server.cpp
│   ├── tcp\_client.cpp
│   └── http\_parser.cpp
├── include/               # Header files
│   └── ...
├── tests/                 # Unit tests and benchmarks
│   └── ...
├── CMakeLists.txt         # Build system
└── README.md              # Project overview

````

---

## 🚀 Getting Started

### Requirements

- C++17 or higher
- CMake ≥ 3.12
- GCC / Clang / MSVC

### Build Instructions

```bash
git clone https://github.com/your-username/cpp-system-utilities.git
cd cpp-system-utilities
mkdir build && cd build
cmake ..
make
````

---

## 🔬 Testing

Tests are located in the `tests/` directory and can be run after building:

```bash
cd build
ctest
```

---

## 🎯 Purpose

This project was created as a technical demonstration for freelance and contract positions, including roles like:

* Systems Programmer
* Backend Infrastructure Engineer
* AI/ML Platform Developer

It shows how to build efficient, safe, and extensible tools from the ground up in C++.

---

## 🧠 Author

**Michael Stacy**
Freelance Systems Developer | AI Trainer
[LinkedIn](https://www.linkedin.com/in/your-profile) • [Website](https://your-portfolio.com) • [Email](mailto:youremail@example.com)

---

## 🛡️ License

This project is licensed under the MIT License — see the [LICENSE](LICENSE) file for details.

```

---
