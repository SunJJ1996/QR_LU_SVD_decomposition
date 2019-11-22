cmake_minimum_required(VERSION 3.15)
project(LU_decomposition)

set(CMAKE_CXX_STANDARD 14)
include_directories(${EIGEN_INC})

add_executable(LU_decomposition main.cpp sp_lu.cpp sp_lu.h eigen_lu.h)