//
// Created by Lucas on 25/01/2024.
//

#ifndef TECOURS_METHODS_H
#define TECOURS_METHODS_H
#include <Eigen/Dense>
#include<functional>

void tabule(std::function<float(float)> f, const Eigen::VectorXf &x, Eigen::VectorXf &y);

#endif //TECOURS_METHODS_H
