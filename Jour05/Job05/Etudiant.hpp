#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP
#include <string>
using namespace std;

class Etudiant {

private:
    string nom;
    string prenom;
    int age;
    int matricule;

public:
    // Constructeur
    Etudiant(string nom, string prenom, int age, int matricule);

    void afficher();
};

#endif