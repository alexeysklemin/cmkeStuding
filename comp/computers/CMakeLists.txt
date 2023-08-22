cmake_minimum_required(VERSION 3.5)

project(computers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(computers main.cpp cpu.cpp)
target_include_directories(computers PUBLIC src)
