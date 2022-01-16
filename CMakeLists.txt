cmake_minimum_required(VERSION 3.21)
project(modulo)

set(CMAKE_CXX_STANDARD 14)

add_executable(fun fun/fun.cpp)

add_executable(testPrint printDemo/testPrint.cpp)

add_executable(print2 print2/testPrint.cpp)
add_executable(str str/str.cpp)
add_executable(Box classDemo/Box.cpp)