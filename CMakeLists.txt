cmake_minimum_required(VERSION 2.8)

project(cplusplus-libraries)

include_directories(include)

file(GLOB CPP_FILES *.cpp src/*.cpp)

add_executable(${PROJECT_NAME} ${CPP_FILES})
