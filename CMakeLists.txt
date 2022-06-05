cmake_minimum_required(VERSION 3.22)
project(gtest_clion)

set(CMAKE_CXX_STANDARD 20)

add_executable(gtest_clion main.cpp)

add_subdirectory(gtests)