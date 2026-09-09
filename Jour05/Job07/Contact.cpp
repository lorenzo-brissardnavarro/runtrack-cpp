#include "Contact.hpp"
#include <iostream>
using namespace std;

// Constructeur liste d'initiation
Contact::Contact(string nom, int numero)
    : nom(nom), numero(numero)
{
}

// Constructeur de copie
Contact::Contact(const Contact& autre)
    : nom(autre.nom), numero(autre.numero)
{
}

void Contact::afficher() {
    cout << "Le numero de telephone de " << nom << " est " << numero << endl; 
}

string Contact::getNom(){
    return this->nom;
}

int Contact::getNumero(){
    return this->numero;
}

void Contact::setNom(string nom){
    this->nom = nom;
}

void Contact::setNumero(int valeur){
    this->numero = valeur;
}
