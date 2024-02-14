#include <iostream>
#include <fstream>
#include <iomanip>
#include <eigen3/Eigen/Dense>
#include <cmath>
#include <string>
#include <functional>

//en-têtes personnels

#include "fcts.h"
#include "methode.h"
#include "util.h"

using namespace std;

extern float k;

int main(){


int n;
float hmin;
float hmax;
float t_0 = M_PI / 4;
int choix;
int choixf;
float f_0;
string filename;
k = 1.0;

cout << "Saisir les valeurs de 1, 2, 3 pour dérivé droite gauche centré" << endl;
cin >> choix ;

cout << "Saisir les valeurs de 1, 2, pour sinus ou exponentielle" << endl;
cin >> choixf ;

cout << "Saisir les valeurs de hmin, hmax, n" << endl;
cin >> hmin >> hmax >> n ;

float r = pow((hmax/hmin), 1./(n-1));



function < float (function<float(float)>, const float, const float) > derive ;
function <float (float)> f ;

if (choix==1){
    derive = deriv2tdd;
    filename = "derivee_droite_e.txt";
}
if (choix==2){
    derive = derriv2tdg;
    filename = "derivee_gauche_e.txt";
}
if (choix==3){
    derive = deriv2tc;
    filename = "derivee_centree_e.txt";
}

if (choixf==1){
    f = sinus;
    f_0 = deriv_sinus(t_0);

}
if (choixf==2){
    f = expo;
    f_0 = deriv_expo(t_0);

}


Eigen::VectorXf x(n); // tableau de h 
Eigen::VectorXf delta(n); // tableau d'erreurs
	
	
	for (int i=0; i<n; i++){
		x(i) = hmin * pow(r, i) ;
		delta(i) = abs(f_0 - derive(f, t_0, x(i)));
	}


//ecriture dans un fichier
ecrit(filename, x, delta);

//affichage
	//for (int i =0; i<x.size(); i++){
	//cout<< x(i) << " " << y(i) << endl;
	//}
return 0;

}
