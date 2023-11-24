cmake_minimum_required(VERSION 3.5)


set(MY_DIR_INCLUDE ${CMAKE_SOURCE_DIR}/hdr)

add_subdirectory(scr)


add_executable(computers cpu.cpp ${MY_DIR_INCLUDE}/cpu.h
								 ${MY_DIR_INCLUDE}/ram.h)
target_include_directories(computers PUBLIC ${CMAKE_SOURCE_DIR} hdrs)
