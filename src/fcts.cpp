//
// Created by Lucas on 25/01/2024.
//

#include "../include/fcts.h"
#include <cmath>

// Paramètres de la fonction logistique
float t0, yzero, a, k;

float carre(float x){
    return x*x;
}

float logistique(float x){
    return k/(1+(k-yzero)/yzero*exp(-a*(x-t0)));
}