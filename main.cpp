#include <iostream>
#include <Eigen/Dense>
#include <iomanip>
#include <string>

#include "methods.h"
#include "fcts.h"
#include "util.h"

using namespace std;

int main() {

    cout << setiosflags(ios::scientific) << setprecision(7);
    cout << "Entrer l'abcisse de debut, de fin et le pas" << endl;

    float x_debut, x_fin, dx;

    cin >> x_debut >> x_fin >> dx;

    // Construction du vecteur X

    int n = (x_fin - x_debut)/dx + 1;
    cout << "n = " << n << endl;

    Eigen::VectorXf X(n);
    for (int i = 0; i < n; i++) {
        X(i) = x_debut + i*dx;
    }

    // Affichage des premières valeurs de X

    cout << "X = " << X(0) << " " << X(1) << " " << X(2) << " ... " << X(n-3) << " " << X(n-2) << " " << X(n-1) << endl;

    // Construction du vecteur Y

    Eigen::VectorXf Y(n);
    tabule(carre, X, Y);

    // Création du fichier

    // Ajoutez des vérifications pour les exceptions lors de l'appel à ecrit

    cout << "Entrer le nom du fichier" << endl;
    string filename;
    cin >> filename;

    ecrit("C:\\Users\\Lucas\\CLionProjects\\TE1\\data\\" + filename + ".txt", X, Y);
    cout << "Fichier " << filename << ".txt ecrit" << endl;

    return 0;
}