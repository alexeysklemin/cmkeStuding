cmake_minimum_required(VERSION 3.18.2)


set(MY_DIR_INCLUDE ${CMAKE_SOURCE_DIR}/hdr)

add_subdirectory(scr)


add_executable(computers cpu.cpp  ${MY_DIR_INCLUDE}/cpu.h
                                              ram.cpp  ${MY_DIR_INCLUDE}/ram.h
                                              gpu.cpp  ${MY_DIR_INCLUDE}/gpu.h
                                              kbd.cpp  ${MY_DIR_INCLUDE}/kbd.h
                                              disk.cpp  ${MY_DIR_INCLUDE}/disk.h)
target_include_directories(computers PUBLIC ${CMAKE_SOURCE_DIR} hdrs)
