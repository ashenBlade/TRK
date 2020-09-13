cmake_minimum_required(VERSION 3.17)
project(TRK)

set(CMAKE_CXX_STANDARD 14)
set(DATA_STRUCTS_SOURCES data-structs/trk_vector.cpp data-structs/trk_vector.h)

add_library(TRK SHARED TRK.cpp library.h ${DATA_STRUCTS_SOURCES})