//
// Created by sunjunjiao on 2019/11/15.
//
#include <Eigen/Eigenvalues>
#include "svd_decomposition.h"
#include "sort_forSVD.h"
#include <algorithm>
namespace Eigen{
    namespace SJJspace{
        std::tuple<Eigen::MatrixXf, Eigen::MatrixXf,Eigen::MatrixXf> svd (Eigen::MatrixXf &A){
            Eigen::MatrixXf U(A.rows(),A.rows());
            Eigen::MatrixXf V(A.cols(),A.cols());
            Eigen::MatrixXf Sigma(A.rows(),A.cols());
            Eigen::MatrixXf A_product ;
            int r =0;
            A_product = A*A.transpose();
            Eigen::EigenSolver<Eigen::MatrixXf> es(A_product);
            Eigen::MatrixXf tempD = es.pseudoEigenvalueMatrix();
            V = es.pseudoEigenvectors();
            Eigen::SJJspace::sort_SVD(tempD,V);
            A_product = A.transpose()*A;
            Eigen::EigenSolver<Eigen::MatrixXf> es2(A_product);
            Eigen::MatrixXf tempD2 = es2.pseudoEigenvalueMatrix();
            U = es2.pseudoEigenvectors();
            Eigen::SJJspace::sort_SVD(tempD2,U);
            for(int i =0;i<std::min(A.rows(),A.cols());i++){
                Sigma(i,i)=tempD2(i,i);
            }
            return std::make_tuple(U, Sigma, V);
        }
    }
}