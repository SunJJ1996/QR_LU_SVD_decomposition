//
// Created by sunjunjiao on 2019/11/11.
//

#ifndef GRAM_SCHMIDT_GRAM_SCHMIDT_ORTHOGONALITY_H
#define GRAM_SCHMIDT_GRAM_SCHMIDT_ORTHOGONALITY_H
#include "Eigen/Sparse"


namespace Eigen{
    namespace SJJspace{
        std::tuple<Eigen::MatrixXf, Eigen::MatrixXf> Schmidt_orth (Eigen::MatrixXf &A);
    }
}
#endif //GRAM_SCHMIDT_GRAM_SCHMIDT_ORTHOGONALITY_H
