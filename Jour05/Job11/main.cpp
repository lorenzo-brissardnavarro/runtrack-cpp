#include "Operation.hpp"
#include <iostream>
using namespace std;

int main() {
    Operation a(10);
    Operation b(5);

    Operation addition = a + b;
    addition.afficher();

    Operation soustraction = a - b;
    soustraction.afficher();

    Operation multiplication = a * b;
    multiplication.afficher();

    Operation division = a / b;
    division.afficher();

    return 0;
}