cmake_minimum_required(VERSION 3.8)
project(dichotomy)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(dichotomy ${SOURCE_FILES})
target_link_libraries(dichotomy m)