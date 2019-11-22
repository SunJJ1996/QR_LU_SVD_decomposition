//
// Created by sunjunjiao on 2019/11/4.
//

#ifndef LU_DECOMPOSITION_EIGEN_LU_H
#define LU_DECOMPOSITION_EIGEN_LU_H

#include <Eigen/Sparse>
#include <iostream>
#include <memory>
#include <vector>
#include "sp_lu.h"

namespace Eigen{
    namespace SJJspace{
        //PA=LU
        inline std::tuple<Eigen::SparseMatrix<double, Eigen::RowMajor> *, Eigen::SparseMatrix<double, Eigen::RowMajor> *,
                Eigen::SparseMatrix<int , Eigen::RowMajor> * > lu(Eigen::SparseMatrix<double, Eigen::RowMajor> *B){

            Eigen::SparseMatrix<double, Eigen::RowMajor> A = (*B);
            Eigen::SparseMatrix<double, Eigen::RowMajor> *L = new Eigen::SparseMatrix<double, Eigen::RowMajor>(A.rows(), A.cols());
            Eigen::SparseMatrix<double, Eigen::RowMajor> *U = new Eigen::SparseMatrix<double, Eigen::RowMajor>(A.rows(), A.cols());
            Eigen::SparseMatrix<int, Eigen::RowMajor> *P = new Eigen::SparseMatrix<int, Eigen::RowMajor>(A.rows(), A.cols());

            Eigen::VectorXi P_vector = Eigen::VectorXi::LinSpaced(A.rows(), 0, A.rows() - 1);
            Eigen::SJJspace::sp_lu(A, P_vector);
            for (int i = 0; i < A.rows(); ++i) {
                (*P).insert(i, P_vector(i)) = 1;
            }

            (*L) = A.triangularView<Eigen::Lower>();
            (*U) = A.triangularView<Eigen::Upper>();
            L->diagonal() = Eigen::VectorXd::Ones(A.rows());
            return std::make_tuple(L, U, P);
        }

    }
}


#endif //LU_DECOMPOSITION_EIGEN_LU_H
