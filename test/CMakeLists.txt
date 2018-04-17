cmake_minimum_required(VERSION 3.5)
project(libtest)

set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

set(SOURCE_FILES unit_tests.cpp bubblesort_test.cpp)

add_executable(libtest ${SOURCE_FILES})
target_link_libraries(libtest ${GTEST_LIBRARIES} cpp_libraries pthread)