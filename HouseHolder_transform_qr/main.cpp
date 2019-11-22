#include <iostream>
#include "Normal_vector.h"
#include "qr_decomposition.h"
int main() {
    Eigen::MatrixXf A (4,3);
    A<<0,-15,14,4,32,2,3,-1,4,5,6,7;
    Eigen::MatrixXf B (3,3);
    B<<0,-15,14,4,32,2,3,-1,4;

    std::cout<<"A:"<<std::endl<<A<<std::endl<<std::endl;
    std::cout<<"B:"<<std::endl<<B<<std::endl<<std::endl;
    Eigen::MatrixXf Q1;
    Eigen::MatrixXf R1;
    Eigen::MatrixXf Q2;
    Eigen::MatrixXf R2;
    std::tie(R1,Q1) = Eigen::SJJspace::qr(A);
    std::tie(R2,Q2) = Eigen::SJJspace::qr(B);
    std::cout << "R1 = " <<std::endl<< (R1) << std::endl<<std::endl;
    std::cout << "Q1 = " <<std::endl<< (Q1) << std::endl<<std::endl;

    std::cout << "R2 = " <<std::endl<< (R2) << std::endl<<std::endl;
    std::cout << "Q2 = " <<std::endl<< (Q2) << std::endl<<std::endl;


    return 0;
}