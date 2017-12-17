cmake_minimum_required(VERSION 3.8)
project(lab07)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(lab07 ${SOURCE_FILES})
target_link_libraries(lab07 m)