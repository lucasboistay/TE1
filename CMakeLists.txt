cmake_minimum_required(VERSION 3.27)
project(TEcours)

# Use double quotes around the path on Windows
include_directories("lib/eigen-3.4.0")

set(CMAKE_CXX_STANDARD 17)

add_executable(TEcours src/main.cpp
        src/fcts.cpp
        src/methods.cpp
        src/util.cpp
        include/fcts.h
        include/methods.h
        include/util.h)
