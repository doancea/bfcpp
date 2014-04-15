cmake_minimum_required(VERSION 2.6)
project(SHAPES)

add_library(Box box.cpp)

include_directories(${SHAPES_SOURCE_DIR})
link_directories(${SHAPES_BINARY_DIR})

add_executable(../bin/shapes shapes.cpp)
