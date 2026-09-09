#include "Personne.hpp"
#include <iostream>
using namespace std;

// Constructeur liste d'initiation
Personne::Personne(string nom, int nbPointsVie, float defense)
    : nom(nom), nbPointsVie(nbPointsVie), defense(defense)
{
}

void Personne::afficher() {
    cout << nom << " possede " << nbPointsVie << " points de vie avec un taux de defense de " << defense << endl; 
}

string Personne::getNom(){
    return this->nom;
}

int Personne::getNbPointsVie(){
    return this->nbPointsVie;
}

float Personne::getDefense(){
    return this->defense;
}

void Personne::setNom(string nom){
    this->nom = nom;
}

void Personne::setNbPointsVie(int valeur){
    this->nbPointsVie = valeur;
}

void Personne::setDefense(float valeur){
    this->defense = valeur;
}
