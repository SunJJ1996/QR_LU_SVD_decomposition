//
// Created by sunjunjiao on 2019/11/6.
//

#include "Normal_vector.h"
namespace Eigen{
    namespace SJJspace{
        Eigen::VectorXf get_vector(Eigen::VectorXf &x){
            Eigen::VectorXf v;
            //compute v=(x-oe1)/(||x-oe1||)
            double Sigma = x.norm();
            Eigen::VectorXf e(x.size());
            e(0)=1;
            v = (x-(Sigma*e))/(x-(Sigma*e)).norm();
            return v;
        }
    }
}