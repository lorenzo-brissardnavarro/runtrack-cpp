#ifndef OPERATION_HPP
#define OPERATION_HPP
using namespace std;

class Operation {

private:
    float nombre;

public:
    // Constructeur
    Operation(float nombre);

    void afficher();

    // Surcharge operateur
    Operation operator+(const Operation& autre);
    Operation operator-(const Operation& autre);
    Operation operator*(const Operation& autre);
    Operation operator/(const Operation& autre);
};

#endif