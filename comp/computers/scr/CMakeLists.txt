cmake_minimum_required(VERSION 3.5)

project(computers VERSION 1.9)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)


add_executable(computers cpu.cpp)
target_include_directories(computers PUBLIC ${CMAKE_SOURCE_DIR} hdrs)
