cmake_minimum_required(VERSION 3.18.4)


set(MY_DIR_INCLUDE ${CMAKE_SOURCE_DIR}/hdrs)

add_subdirectory(src)


add_executable(player track.cpp ${MY_DIR_INCLUDE}/track.h player.cpp ${MY_DIR_INCLUDE}/player.h)
target_include_directories(computers PUBLIC ${CMAKE_SOURCE_DIR} hdrs)
