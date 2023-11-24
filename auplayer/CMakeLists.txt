cmake_minimum_required(VERSION 3.18.4)

project(player LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#--file(GLOB CPP "scr/*.cpp)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/hdrs)
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)

include_directories(${INCLUDE_DIR})

add_executable(
	${PROJECT_NAME}
	${SOURCE_DIR}/main.cpp
	${SOURCE_DIR}/track.cpp
	${SOURCE_DIR}/player.cpp

	${INCLUDE_DIR}/track.h
	${INCLUDE_DIR}/player.h
)

target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})

