#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
using namespace std;

class Contact {

private:
    string nom;
    int numero;

public:
    // Constructeur
    Contact(string nom, int numero);

    // Constructeur de copie
    Contact(const Contact& autre);

    void afficher();
    string getNom();
    int getNumero();
    void setNom(string nom);
    void setNumero(int valeur);
};

#endif