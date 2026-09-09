#ifndef PERSONNE_HPP
#define PERSONNE_HPP
#include <string>
using namespace std;

class Personne {

private:
    string nom;
    int nbPointsVie;
    float defense;

public:
    // Constructeur
    Personne(string nom, int nbPointsVie, float defense);

    void afficher();
    string getNom();
    int getNbPointsVie();
    float getDefense();
    void setNom(string nom);
    void setNbPointsVie(int valeur);
    void setDefense(float valeur);
};

#endif