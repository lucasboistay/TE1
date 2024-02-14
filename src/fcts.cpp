#include <iostream>
#include <fstream>
#include <iomanip>
#include <Eigen/Dense>
#include <cmath>
using namespace std;

//en-têtes personnels
#include "fcts.h"

float k;

float sinus(float t){
	return sin(k*t);	
}

float deriv_sinus(float t){
    return k*cos(k*t);
}

float expo(float t){
	return exp(k*t);	
}

float deriv_expo(float t){
    return k*exp(k*t);
}
