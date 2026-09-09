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
    cout << "Valeur X : " << x;
    cout << " Valeur Y : " << y;
    cout << " Nom : " << nom;
}

void Joueur::deplacerX(int valeur) {
    x += valeur;
}

void Joueur::deplacerY(int valeur) {
    y += valeur;
}

int Joueur::getX(){
    return this->x;
}

int Joueur::getY(){
    return this->y;
}

string Joueur::getNom(){
    return this->nom;
}

void Joueur::setX(int valeur){
    this->x = valeur;
}

void Joueur::setY(int valeur){
    this->y = valeur;
}

void Joueur::setNom(string nom){
    this->nom = nom;
}