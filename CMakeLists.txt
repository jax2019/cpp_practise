cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 98)

add_executable(io main.cpp )
add_executable(cast  CastTest.h CastTest.cpp)
add_executable(array chapter1/ArrayTest.cpp )
add_executable(override  chapter1/OverrideTest.cpp)
add_executable(test1 chapter1/CodeAnswer1.cpp)