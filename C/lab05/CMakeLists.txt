cmake_minimum_required(VERSION 3.8)
project(lab05)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(lab05 ${SOURCE_FILES})
target_link_libraries(lab05 m)