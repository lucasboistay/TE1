#include <iostream>
#include <fstream>
#include <iomanip>
#include <Eigen/Dense>

#include <functional>
#include "methods.h"

using namespace std;


float deriv2tdd(std::function<float(float)> f, const float t_0, const float h){ //Arguments : la fonction à tester, l'abscisse ou on effectue la dérivée, le pas h

	return (f(t_0 + h) - f(t_0)) / h ;
	
	
}

float derriv2tdg(std::function<float(float)> f, const float t_0, const float h){ //Arguments : la fonction à tester, l'abscisse ou on effectue la dérivée, le pas h

	return (f(t_0) - f(t_0 - h)) / h ;
	
	
}

float deriv2tc(std::function<float(float)> f, const float t_0, const float h){ //Arguments : la fonction à tester, l'abscisse ou on effectue la dérivée, le pas h

	return (f(t_0 + h) - f(t_0 - h)) / (2*h) ;
	
	
}
