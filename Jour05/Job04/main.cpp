#include "Joueur.hpp"
#include <iostream>
using namespace std;

int main() {
    Joueur personnage(3,4, "personnage3");
    cout << "Personnage au depart : ";
    personnage.afficher();
    personnage.setNom("PERSONNAGE");
    cout << "\nApres modif, le nouveau nom est " << personnage.getNom();
    return 0;
}