cmake_minimum_required(VERSION 3.5)


set(MY_DIR_INCLUDE ${CMAKE_SOURCE_DIR}/hdr)

add_subdirectory(src)


add_executable(computers cpu.cpp ${MY_DIR_INCLUDE}/cpu.h)
target_include_directories(computers PUBLIC ${CMAKE_SOURCE_DIR} hdrs)
