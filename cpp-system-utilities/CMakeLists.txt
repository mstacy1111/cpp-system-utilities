cmake_minimum_required(VERSION 3.12)
project(cpp_system_utilities)

set(CMAKE_CXX_STANDARD 17)

add_executable(pool_allocator allocator/pool_allocator.cpp)
add_executable(task_queue concurrency/task_queue.cpp)
add_executable(tcp_server networking/tcp_server.cpp)
add_executable(tcp_client networking/tcp_client.cpp)
add_executable(http_parser networking/http_parser.cpp)
