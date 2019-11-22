//
// Created by sunjunjiao on 2019/11/6.
//

#ifndef HOUSEHOLDER_TRANSFORM_HOUESHOLDER_H_H
#define HOUSEHOLDER_TRANSFORM_HOUESHOLDER_H_H
#include "Normal_vector.h"

namespace Eigen{
    namespace SJJspace{
        Eigen::MatrixXf get_H(Eigen::VectorXf &v);
    }
}


#endif //HOUSEHOLDER_TRANSFORM_HOUESHOLDER_H_H
