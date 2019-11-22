#include <iostream>
#include "Gram_Schmidt_orthogonality.h"
int main() {
    Eigen::MatrixXf x (4,3);
    x << 1,2,-1,1,-1,2,-1,1,1,1,-1,2;
    std::cout << x<<std::endl;
    Eigen::MatrixXf Q1;
    Eigen::MatrixXf R1;
    std::tie(Q1,R1) = Eigen::SJJspace::Schmidt_orth(x);
    std::cout << Q1<<std::endl;
    std::cout << R1<<std::endl;
}