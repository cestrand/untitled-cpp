cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Application.cpp Application.h elementary/ElementaryApplication.cpp elementary/ElementaryApplication.h elementary/Atom.cpp elementary/Atom.h)
add_executable(untitled ${SOURCE_FILES})