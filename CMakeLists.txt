cmake_minimum_required(VERSION 2.8)
project(client)

set(CMAKE_CXX_FLAGS "-Wall -std=c++0x")

if (CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "_d")
    set(buildDir ${CMAKE_CURRENT_SOURCE_DIR}/build/debug)
else(CMAKE_BUILD_TYPE STREQUAL Release)
    set(BUILD_POSTFIX "")
    set(buildDir ${CMAKE_CURRENT_SOURCE_DIR}/build/release)
endif(CMAKE_BUILD_TYPE STREQUAL Debug)

include_directories(cpp_libraries)
add_library(cpp_libraries INTERFACE)
target_link_libraries(cpp_libraries INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_BUILD_DIRECTORY ${buildDir})
add_executable(${PROJECT_NAME} client.cpp})

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY
                    ${CMAKE_SOURCE_DIR}/bin/${PROJECT_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES
                    OUTPUT_NAME ${PROJECT_NAME}${BUILD_POSTFIX})

