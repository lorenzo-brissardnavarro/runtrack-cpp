#include "Operation.hpp"
#include <iostream>
using namespace std;

// Constructeur liste d'initiation
Operation::Operation(float nombre)
    : nombre(nombre)
{
}

void Operation::afficher() {
    cout << nombre << endl;
}

// Surchage operateur
Operation Operation::operator+(const Operation& autre) {
    return Operation(nombre + autre.nombre);
}


Operation Operation::operator-(const Operation& autre) {
    return Operation(nombre - autre.nombre);
}


Operation Operation::operator*(const Operation& autre) {
    return Operation(nombre * autre.nombre);
}


Operation Operation::operator/(const Operation& autre) {
    return Operation(nombre / autre.nombre);
}
