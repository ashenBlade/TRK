cmake_minimum_required(VERSION 3.17)
project(TRK)

set(CMAKE_CXX_STANDARD 14)

include_directories(data-structs)
set(DATA_STRUCTS_SOURCES trk_vector.h trk_vector.cpp)

add_library(TRK SHARED TRK.cpp ${DATA_STRUCTS_SOURCES})