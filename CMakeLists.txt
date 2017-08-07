cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 17)
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.62.0 COMPONENTS filesystem regex system date_time)

set(SOURCE_FILES main.cpp Application.cpp Application.h elementary/ElementaryApplication.cpp elementary/ElementaryApplication.h elementary/Atom.cpp elementary/Atom.h utils/Logging.h utils/Logging.cpp)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(untitled ${SOURCE_FILES})
target_link_libraries(untitled ${Boost_LIBRARIES})