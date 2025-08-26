cmake_minimum_required(VERSION 3.28)
project(sfmltest LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(dependencies)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
