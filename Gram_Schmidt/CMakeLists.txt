cmake_minimum_required(VERSION 3.15)
project(Gram_Schmidt)

set(CMAKE_CXX_STANDARD 14)
include_directories(${EIGEN_INC})
add_executable(Gram_Schmidt main.cpp Gram_Schmidt_orthogonality.cpp Gram_Schmidt_orthogonality.h)