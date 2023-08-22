cmake_minimum_required(VERSION 3.5)

project(medcine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(medcine main.cpp hemorstat.h hemorstat.cpp scalpel.h scalpel.cpp suture.h suture.cpp tweezers.h tweezers.cpp)
