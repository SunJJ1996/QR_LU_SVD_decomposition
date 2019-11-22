//
// Created by sunjunjiao on 2019/11/4.
//

#include "sp_lu.h"
namespace Eigen{
    namespace SJJspace{

        void sp_lu(Eigen::SparseMatrix<double, Eigen::RowMajor> &A, Eigen::VectorXi &P){
            // P= [0 ,1 ,2 ,3 ,4 ...]
            size_t n = A.rows();
            for (int k = 0; k < n - 1; ++k) {
                int row = -1;
                Eigen::VectorXd k_col = A.col(k);
                k_col.maxCoeff(&row);
                //交换A矩阵的第K列的最大值与主元
                if(row != k){
                    Eigen::VectorXd k_row = A.row(k);
                    for (int col_index = 0; col_index < A.cols(); ++col_index) {
                        double coeffRef_temp = A.coeffRef(k, col_index);
                        A.coeffRef(k, col_index) = A.coeffRef(row, col_index);
                        A.coeffRef(row, col_index) = coeffRef_temp;
                    }

                    //做相应的行变换，即左乘置换矩阵
                    int temp = P.coeffRef(row);
                    P.coeffRef(row) = P.coeffRef(k);
                    P.coeffRef(k) = temp;
                }
                for (int i = k + 1; i < n; ++i) {
                    A.coeffRef(i, k) /= A.coeffRef(k, k);
                    for (int j = k + 1; j < n; ++j) {
                        A.coeffRef(i, j) -= A.coeffRef(i, k) * A.coeffRef(k, j);
                    }
                }
            }
        }


    }
}