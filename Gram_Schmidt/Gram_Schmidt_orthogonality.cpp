//
// Created by sunjunjiao on 2019/11/11.
//

#include <iostream>

#include "Gram_Schmidt_orthogonality.h"
namespace Eigen{
    namespace SJJspace{
        std::tuple<Eigen::MatrixXf, Eigen::MatrixXf> Schmidt_orth (Eigen::MatrixXf &A){
            Eigen::MatrixXf Y(A.rows(),A.cols());
            Eigen::MatrixXf Q(A.rows(),A.cols());
            Eigen::MatrixXf R(A.cols(),A.cols());
            Eigen::MatrixXf Y_parameter = Eigen::MatrixXf::Zero(A.rows(),A.rows());
            Eigen::VectorXf y,y_last;
            for(int i=0;i<A.cols();i++){
                Eigen::VectorXf x = A.col(i);
                if(i==0){
                    y = x;
                    Y.col(i) = y;
                    Q.col(i) = y/y.norm();
                    y_last = y;
                }
                else{
                    //compute Y with no identity
                    Y_parameter = Y_parameter + (y_last*y_last.transpose())/(y_last.transpose()*y_last);
                    y = x-(Y_parameter*x);
                    Y.col(i) = y;
                    Q.col(i) = y/y.norm();
                    y_last = y;
                }
            }
            //identity Y to Q
            std::cout << Y<<std::endl;
            for(int i = 0;i<R.cols();i++){
                R.coeffRef(i,i) = Y.col(i).norm();
                if(i==0){
                    continue;
                }
                else{
                    for(int j=0;j<i;j++){
                        R.coeffRef(j,i) = Q.col(j).transpose()*A.col(i);
                    }
                }
            }
            return std::make_tuple(Q,R);
        }
    }
}