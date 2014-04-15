cmake_minimum_required(VERSION 2.6)
project(SHAPES)

add_subdirectory(src)
add_library(Box src/box.cpp)
add_executable(bin/shapes src/shapes.cpp)
include_directories(${SHAPES_SOURCE_DIR}/src)

link_directories(${SHAPES_BINARY_DIR}/src)
