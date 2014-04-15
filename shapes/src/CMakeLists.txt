cmake_minimum_required(VERSION 2.6)
project(SHAPES)

add_library(Box box.cpp)

include_directories(${SHAPES_SOURCE_DIR})
link_directories(${SHAPES_BINARY_DIR})

add_executable(../bin/shapes shapes.cpp)
target_link_libraries(../bin/shapes Box)

#Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

#Link runTests with what we wnat ot test and the GTest pthread library
add_executable(../bin/testBox ../tests/testbox.cpp)
target_link_libraries(../bin/testBox Box ${GTEST_LIBRARIES} pthread)
