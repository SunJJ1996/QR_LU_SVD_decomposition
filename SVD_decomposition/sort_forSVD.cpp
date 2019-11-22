//
// Created by sunjunjiao on 2019/11/15.
//

#include "sort_forSVD.h"
namespace Eigen{
    namespace SJJspace{
        void sort_SVD (Eigen::MatrixXf &D,Eigen::MatrixXf &V){
            Eigen::VectorXf temp;
            int temp2;
            for (int i = 0; i < D.rows(); i++)
            {
                for (int j = i + 1; j < D.rows(); j++)
                {
                    if (D(i,i)<D(j,j)){
                        temp2 = D(i,i);
                        D(i,i)=D(j,j);
                        D(j,j)=temp2;
                        temp = V.col(i);
                        V.col(i) = V.col(j);
                        V.col(j) = temp;
                    }

                }
            }
        }
    }
}