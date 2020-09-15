cmake_minimum_required(VERSION 3.0)
project(TRK)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-Wall -Wextra -std=c++14)

add_executable(${PROJECT_NAME}  main.cpp
                                data_structs/trk_vector.h)

target_include_directories( ${PROJECT_NAME}
        PUBLIC
        ${PROJECT_SOURCE_DIR}/data_structs)