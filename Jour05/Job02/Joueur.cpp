#include "Joueur.hpp"
#include <iostream>
using namespace std;

Joueur::Joueur(int valeurX, int valeurY)
    : x(valeurX), y(valeurY)
{
}

void Joueur::afficher() {
    cout << "Valeur X : " << x << endl;
    cout << "Valeur Y : " << y << endl;
}

void Joueur::deplacerX(int valeur) {
    x += valeur;
}

void Joueur::deplacerY(int valeur) {
    y += valeur;
}