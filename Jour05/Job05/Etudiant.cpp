#include "Etudiant.hpp"
#include <iostream>
using namespace std;

// Constructeur liste d'initiation
Etudiant::Etudiant(string nom, string prenom, int age, int matricule)
    : nom(nom), prenom(prenom), age(age), matricule(matricule)
{
}

void Etudiant::afficher() {
    cout << "Nom : " << nom << endl;
    cout << "Prenom : " << prenom << endl;
    cout << "Age : " << age << " ans" << endl;
    cout << "Matricule : " << matricule << endl;
}
