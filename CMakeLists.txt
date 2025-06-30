cmake_minimum_required(VERSION 3.15)

project(testS5536 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(testS5536 main.cpp lib.cpp
    lib.h)

    