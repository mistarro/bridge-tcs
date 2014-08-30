cmake_minimum_required(VERSION 2.6)
project(BRIDGETCS CXX)

set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BRIDGETCS_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BRIDGETCS_SOURCE_DIR}/lib)

include_directories(include)
add_subdirectory(src)
