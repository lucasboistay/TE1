cmake_minimum_required(VERSION 3.27)
project(TEcours)

# Use double quotes around the path on Windows
include_directories("C:/Users/Lucas/CLionProjects/eigen-3.4.0/eigen-3.4.0")

set(CMAKE_CXX_STANDARD 17)

add_executable(TEcours main.cpp
        fcts.cpp
        methods.cpp
        util.cpp
        fcts.h
        methods.h
        util.h)
