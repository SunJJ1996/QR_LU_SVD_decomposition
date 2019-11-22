//
// Created by sunjunjiao on 2019/11/6.
//

#include "Houesholder_H.h"
namespace Eigen{
    namespace SJJspace{
        Eigen::MatrixXf get_H(Eigen::VectorXf &v){
            Eigen::MatrixXf I = Eigen::MatrixXf::Identity(v.size(),v.size());
            Eigen::MatrixXf H = I - (2*v*v.transpose());
            return H;
        }
    }
}