//
// Created by egor on 05.02.2022.
//

#ifndef MY_PROJECT_THREEDIAGONALSOLVER_HPP
#define MY_PROJECT_THREEDIAGONALSOLVER_HPP


#include "my_project/matrix/ThreeDiagonalMatrix.hpp"

namespace Slae::Solver {
    class ThreeDiagonalSolver {
    public:
        static double *solveThreeDiagonal(const Slae::Matrix::ThreeDiagonalMatrix &matrix, const double* col);
    };
}


#endif //MY_PROJECT_THREEDIAGONALSOLVER_HPP
