#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP
#include <string>
using namespace std;

class Joueur {

private:
    int x;
    int y;
    string nom;

public:
    // Constructeur avec coordonnées par défaut
    Joueur();

    // Constructeur qui prend en paramètre les valeurs x et y
    Joueur(int valeurX, int valeurY);

    // Constructeur qui prend en paramètre les valeurs x, y et nom
    Joueur(int valeurX, int valeurY, string valeurNom);

    void afficher();
    void deplacerX(int valeur);
    void deplacerY(int valeur);
};

#endif