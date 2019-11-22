#include <iostream>
#include "svd_decomposition.h"
#include <Eigen/Eigenvalues>
#include "sort_forSVD.h"
int main() {
    Eigen::MatrixXf x (4,5);
    x << 1,0,0,0,2,0,0,3,0,0,0,0,0,0,0,0,4,0,0,0;
    std::cout<<x<<std::endl;

    Eigen::MatrixXf U;
    Eigen::MatrixXf Sigma;
    Eigen::MatrixXf V;
    std::tie(U, Sigma, V) = Eigen::SJJspace::svd(x);
    std::cout << "U = " << std::endl<< U << std::endl;
    std::cout << "Sigma = " << std::endl<< Sigma << std::endl;
    std::cout << "V = " << std::endl<< V << std::endl;

}