cmake_minimum_required(VERSION 3.7)
project(equal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp TestSuite/test.h TestSuite/test.cpp TestSuite/suite.h TestSuite/suite.cpp SampleTest/SampleTest.cpp)
add_executable(equal ${SOURCE_FILES})