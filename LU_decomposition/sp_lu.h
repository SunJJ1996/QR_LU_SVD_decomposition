//
// Created by sunjunjiao on 2019/11/4.
//

#ifndef LU_DECOMPOSITION_SP_LU_H
#define LU_DECOMPOSITION_SP_LU_H
#include "Eigen/Sparse"

namespace Eigen{
    namespace SJJspace{
        void sp_lu(Eigen::SparseMatrix<double, Eigen::RowMajor> &A, Eigen::VectorXi &P);
    }
}


#endif //LU_DECOMPOSITION_SP_LU_H
