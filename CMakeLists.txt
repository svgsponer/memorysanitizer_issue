cmake_minimum_required(VERSION 3.12)
project(sanitizertest)

# Setup for sanitizers see https://github.com/arsenm/sanitizers-cmake
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/externals/sanitizers-cmake/cmake" ${CMAKE_MODULE_PATH})
find_package(Sanitizers)

add_executable(test test.cpp)

# Add sanitizer
add_sanitizers(test)
