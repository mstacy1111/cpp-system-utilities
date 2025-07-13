# cpp-system-utilities

**High-Performance C++ System Utilities and Tools**  
A collection of system-level utilities demonstrating deep expertise in C/C++ programming, memory management, concurrency, and networking. Built for performance, clarity, and extensibility.

## 🧠 Overview

This repository showcases:

- Custom memory allocation strategies
- Thread-safe task scheduling and synchronization
- Low-level socket communication and basic HTTP parsing

## 📦 Features

### 1. Custom Memory Allocator
A custom malloc/free implementation using pool allocation and memory blocks. Optimized for speed and low fragmentation in long-running applications.

### 2. Multi-threaded Task Queue
A thread-safe producer-consumer system using modern C++ synchronization primitives.

### 3. Network Utility Toolkit
- TCP Echo Server/Client
- Basic HTTP Parser

## 📂 Project Structure

```
cpp-system-utilities/
├── allocator/
├── concurrency/
├── networking/
├── CMakeLists.txt
└── README.md
```

## 🚀 Getting Started

### Requirements

- C++17 or higher
- CMake ≥ 3.12
- GCC / Clang

### Build Instructions

```bash
git clone https://github.com/mstacy1111/cpp-system-utilities.git
cd cpp-system-utilities
mkdir build && cd build
cmake ..
make
```

## 🔬 Testing

Test each binary by running the compiled executables in `build/`.

## 🧠 Author

**Michael Stacy**  
Freelance Systems Developer | AI Trainer

## 🛡️ License

This project is licensed under the MIT License.
