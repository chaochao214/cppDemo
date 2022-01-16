cmake_minimum_required(VERSION 3.21)
project(modulo)

set(CMAKE_CXX_STANDARD 14)

add_executable(modulo main.cpp)

add_executable(testPrint printDemo/testPrint.cpp)

add_executable(print2 print2/testPrint.cpp)