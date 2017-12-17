cmake_minimum_required(VERSION 3.8)
project(lab08)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(lab08 ${SOURCE_FILES})
target_link_libraries(lab08 m)
target_link_libraries(lab08 -fopenmp)