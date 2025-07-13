# cpp-system-utilities
Advanced C/C++ systems programming techniques, and custom-built components engineered for performance-critical environments.

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

