cmake_minimum_required(VERSION 3.15)
project(SVD_decomposition)

set(CMAKE_CXX_STANDARD 14)
include_directories(${EIGEN_INC})
add_executable(SVD_decomposition main.cpp svd_decomposition.cpp svd_decomposition.h sort_forSVD.cpp sort_forSVD.h)