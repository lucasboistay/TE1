//
// Created by Lucas on 25/01/2024.
//

#include "methods.h"

using namespace std;

void tabule(std::function<float(float)> f, const Eigen::VectorXf &x, Eigen::VectorXf &y){
    for (int i = 0; i < x.size(); i++) {
        y(i) = f(x(i));
    }
}