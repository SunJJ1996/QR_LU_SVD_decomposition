//
// Created by sunjunjiao on 2019/11/7.
//

#ifndef HOUSEHOLDER_TRANSFORM_QR_DECOMPOSITION_H
#define HOUSEHOLDER_TRANSFORM_QR_DECOMPOSITION_H
#include "Eigen/Sparse"

namespace Eigen{
    namespace SJJspace{
        std::tuple<Eigen::MatrixXf, Eigen::MatrixXf> qr(Eigen::MatrixXf A);
    }
}


#endif //HOUSEHOLDER_TRANSFORM_QR_DECOMPOSITION_H
