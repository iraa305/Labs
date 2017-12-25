cmake_minimum_required(VERSION 3.8)
project(SAXPY)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(SAXPY ${SOURCE_FILES})
target_link_libraries(SAXPY -fopenmp)
