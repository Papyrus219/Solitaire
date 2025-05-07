cmake_minimum_required(VERSION 3.30)
project(solitaire)

file(GLOB_RECURSE SRC src/*cpp)
set(SOURCES ${SRC})
add_executable(solitaire ${SOURCES})
