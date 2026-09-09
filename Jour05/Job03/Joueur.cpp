#include "Joueur.hpp"
#include <iostream>
using namespace std;

// Constructeur avec coordonnées par défaut
Joueur::Joueur(){
    x = 0;
    y = 0;
    nom = "personnage1";
}

// Constructeur qui prend en paramètre les valeurs x et y
Joueur::Joueur(int valeurX, int valeurY){
    x = valeurX;
    y = valeurY;
    nom = "personnage2";
}

// Constructeur qui prend en paramètre les valeurs x, y et nom
Joueur::Joueur(int valeurX, int valeurY, string ValeurNom){
    x = valeurX;
    y = valeurY;
    nom = ValeurNom;
}


void Joueur::afficher() {
    cout << "Valeur X : " << x << endl;
    cout << "Valeur Y : " << y << endl;
    cout << "Nom : " << nom << endl;
}

void Joueur::deplacerX(int valeur) {
    x += valeur;
}

void Joueur::deplacerY(int valeur) {
    y += valeur;
}