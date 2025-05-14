cmake_minimum_required(VERSION 3.31)
project(solitare)

file(GLOB_RECURSE SRC src/*cpp)
set(SOURCES ${SRC})
add_executable(solitare ${SOURCES})
