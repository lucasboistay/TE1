//
// Created by Lucas on 25/01/2024.
//

#include <fstream>
#include <iostream>
#include <iomanip>
#include <Eigen/Dense>

#include "../include/util.h"

using namespace std;

void ecrit(const string &filename, const Eigen::VectorXf &x,const Eigen::VectorXf &y){
    ofstream my_file;
    my_file.open(filename, ios::out);

    if (!my_file){ //test de la reussite
        cerr << "Impossible d'ouvrir " << filename <<endl;
        exit(EXIT_FAILURE);
    }

    my_file << setiosflags(ios::scientific) << setprecision(7);

    // En tête du fichier

    my_file << "# " << x(0) << " " << x(x.size()-1) << endl;
    my_file << "# " << y.minCoeff() << " " << y.maxCoeff() << endl;
    my_file << "# " << x.size() << " " << x(1) - x(0)  << endl;

    for (int i = 0; i < x.size(); i++) {
        my_file << x(i) << " " << y(i) << endl;
    }

    my_file.close();
}