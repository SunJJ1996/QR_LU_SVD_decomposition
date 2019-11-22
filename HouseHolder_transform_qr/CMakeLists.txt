cmake_minimum_required(VERSION 3.15)
project(HouseHolder_transform)

set(CMAKE_CXX_STANDARD 14)
include_directories(${EIGEN_INC})
add_executable(HouseHolder_transform main.cpp Normal_vector.cpp Normal_vector.h Houesholder_H.cpp Houesholder_H.h qr_decomposition.cpp qr_decomposition.h)