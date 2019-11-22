//
// Created by sunjunjiao on 2019/11/7.
//

#include "qr_decomposition.h"
#include "Normal_vector.h"
#include "Houesholder_H.h"
#include <vector>
#include <iostream>

namespace Eigen{
    namespace SJJspace{
        std::tuple<Eigen::MatrixXf, Eigen::MatrixXf> qr(Eigen::MatrixXf A){
            Eigen::MatrixXf R = A;
            int flag;
//            std::cout<<R<<std::endl<<std::endl;
            size_t n = R.cols();
            size_t m = R.rows();
            Eigen::MatrixXf HH_Mat = Eigen::MatrixXf::Identity(m,m);
//            std::cout<<HH_Mat<<std::endl<<std::endl;
            if(m==n){
                flag = n-1;
            }
            else if(m>n){
                flag = n;
            }
            for(int i=0;i<flag;i++){
                Eigen::MatrixXf T = R.block(i,i,m-i,n-i);
//                std::cout<<T<<std::endl<<std::endl;
                Eigen::VectorXf temp(m-i);
                temp = T.col(0);
//                std::cout<<temp<<std::endl<<std::endl;
                Eigen::VectorXf v = Eigen::SJJspace::get_vector(temp);
//                std::cout<<v<<std::endl<<std::endl;
                Eigen::MatrixXf H = Eigen::MatrixXf::Identity(m,m);
//                std::cout<<H<<std::endl<<std::endl;
                Eigen::MatrixXf h = Eigen::SJJspace::get_H(v);
//                std::cout<<h<<std::endl<<std::endl;
                H.block(i,i,m-i,m-i) = h;
//                std::cout<<H<<std::endl<<std::endl;
                R = H*R;
//                std::cout<<R<<std::endl<<std::endl;
                HH_Mat = HH_Mat*H;
//                std::cout<<HH_Mat<<std::endl<<std::endl;
//                std::cout<<"number!!!!!!!!"<<i<<std::endl<<std::endl;
            }
            return std::make_tuple(R,HH_Mat);
        }
    }
}