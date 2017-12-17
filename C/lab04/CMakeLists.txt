cmake_minimum_required(VERSION 3.8)
project(lab04)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(lab04 ${SOURCE_FILES})
target_link_libraries(lab04 m)