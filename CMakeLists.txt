cmake_minimum_required(VERSION 3.5)
project(client)

set(CMAKE_CXX_STANDARD 11)
include_directories(cpp_libraries)
add_library(cpp_libraries INTERFACE)
target_link_libraries(cpp_libraries INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(test)
add_executable(client client.cpp)
add_executable(jvectorclient jvectorClient.cpp)
add_executable(flistclient flistClient.cpp)
add_executable(jstringClient jstringClient.cpp)



