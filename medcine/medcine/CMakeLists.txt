cmake_minimum_required(VERSION 3.5)

project(medcine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(medcine src/main.cpp include/hemorstat.h src/hemorstat.cpp include/scalpel.h src/scalpel.cpp include/suture.h src/suture.cpp include/tweezers.h src/tweezers.cpp)
target_include_directories (medcine PUBLIC include)
