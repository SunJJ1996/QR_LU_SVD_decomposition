#include <iostream>
#include "eigen_lu.h"
int main() {

    Eigen::SparseMatrix<double, Eigen::RowMajor> *a = new Eigen::SparseMatrix<double, Eigen::RowMajor>(3, 3);
    std::vector<Eigen::Triplet<double> > t;
    t.emplace_back(0, 0, 4);
    t.emplace_back(0, 2, 1);
    t.emplace_back(1, 1, 5);
    t.emplace_back(1, 2, 1);
    t.emplace_back(2, 0, 8);
    t.emplace_back(2, 1, 2);
    t.emplace_back(2, 2, 7);

    a->setFromTriplets(t.begin(), t.end());
    std::cout << "a = " << *a << std::endl;
    Eigen::SparseMatrix<double, Eigen::RowMajor> *L = nullptr;
    Eigen::SparseMatrix<double, Eigen::RowMajor> * U = nullptr;
    Eigen::SparseMatrix<int, Eigen::RowMajor> * P = nullptr;
    std::tie(L, U, P) = Eigen::SJJspace::lu(a);
    std::cout << "P = " << (*P) << std::endl;
    std::cout << "L = " << (*L) << std::endl;
    std::cout << "U = " << (*U) << std::endl;

    return 0;
}