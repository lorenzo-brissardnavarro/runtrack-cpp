#include "Animal.hpp"
#include <iostream>
using namespace std;

int Animal::compteurAnimaux = 0; // Initialisation obligatoire

void Chien::crier() {
    cout << "Wouf !" << endl;
}

void Chat::crier() {
    cout << "Miaou !" << endl;
}

void Chien::manger() {
    cout << "Le chien a une alimentation variee" << endl;
}

void Chat::manger() {
    cout << "Le chat mange du poisson" << endl;
}
