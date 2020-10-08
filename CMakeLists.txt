cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 98)

add_executable(io main.cpp )
add_executable(cast  CastTest.h CastTest.cpp)
add_executable(array chapter01/ArrayTest.cpp )
add_executable(override chapter01/OverrideTest.cpp)
add_executable(test1 chapter01/CodeAnswer1.cpp)
add_executable(chapter02_date chapter02/MyDate.cpp chapter02/MyDate.h chapter02/Student.cpp chapter02/Student.h)
add_executable(chapter03_constructor chapter03/varTest.cpp chapter03/CppBean.cpp chapter03/CppBean.h chapter03/School.cpp chapter03/School.h chapter03/JD.cpp chapter03/JD.h)