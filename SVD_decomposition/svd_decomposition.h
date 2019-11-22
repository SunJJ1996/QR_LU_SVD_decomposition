//
// Created by sunjunjiao on 2019/11/15.
//

#ifndef SVD_DECOMPOSITION_SVD_DECOMPOSITION_H
#define SVD_DECOMPOSITION_SVD_DECOMPOSITION_H
#include "Eigen/Sparse"

namespace Eigen{
    namespace SJJspace{
        std::tuple<Eigen::MatrixXf, Eigen::MatrixXf,Eigen::MatrixXf> svd (Eigen::MatrixXf &A);
    }
}


#endif //SVD_DECOMPOSITION_SVD_DECOMPOSITION_H
