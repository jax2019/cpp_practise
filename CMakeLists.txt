cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 98)

add_executable(io main.cpp )
add_executable(cast  CastTest.h CastTest.cpp)
add_executable(array chapter01/ArrayTest.cpp chapter04/Main.cpp chapter04/Math.cpp chapter04/Math.h)
add_executable(override chapter01/OverrideTest.cpp)
add_executable(test1 chapter01/CodeAnswer1.cpp)
add_executable(chapter02_date chapter02/MyDate.cpp chapter02/MyDate.h chapter02/Student.cpp chapter02/Student.h)
add_executable(chapter03_constructor chapter03/varTest.cpp chapter03/CppBean.cpp chapter03/CppBean.h chapter03/School.cpp chapter03/School.h chapter03/JD.cpp chapter03/JD.h chapter03/FriendMethod.cpp chapter03/FriendMethod.h)
add_executable(chapter04_operator chapter04/Main.cpp chapter04/Math.h chapter04/Math.cpp)
add_executable(chapter05_extends chapter05/Main.cpp chapter05/BaseClass.cpp chapter05/SubClass.cpp)