#include <iostream>
#include <fstream>
#include <iomanip>
#include <eigen3/Eigen/Dense>

#include "util.h"

using namespace std;

float pas;
int taille;

void ecrit(const std::string &filename, const Eigen::VectorXf &x, const Eigen::VectorXf &y){

	ofstream my_file; //declaration d 'un objet output file stream
	my_file.open(filename); //connexion du flux au fichier
	
	if (! my_file) { //test de la reussite
		cerr << "Impossible d 'ouvrir " << filename << endl;
		exit(EXIT_FAILURE);
	}
	
	//definition du format de sortie
	my_file << setiosflags(ios::scientific) << setprecision(7);
	
	//ecriture d'en tête
	my_file << "#" << " " << "h min" << " " << x.minCoeff() << " " << " h max" << " " << x.maxCoeff() << endl;
	my_file << "#" << " " << "delta min" << " " << y.minCoeff() << " " << " delta max" << " " << y.maxCoeff() << endl;
	
	
	for (int i = 0; i < x.size(); i++) {
		my_file << x(i) << " " << y(i) << endl;
	}
	my_file.close(); //fermeture de la connexion

}

