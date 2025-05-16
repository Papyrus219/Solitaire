cmake_minimum_required(VERSION 3.31)
project(solitare)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23")

file(GLOB_RECURSE SRC src/*cpp)
set(SOURCES ${SRC})
add_executable(solitare ${SOURCES})
