#ifndef METHODE_H
#include <functional>
#include <eigen3/Eigen/Dense>
float deriv2tdd(std::function<float(float)>, const float, const float);
float derriv2tdg(std::function<float(float)>, const float, const float);
float deriv2tc(std::function<float(float)>, const float, const float);
#define METHODE_H
#endif
