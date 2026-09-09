#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP
using namespace std;

class Joueur {

private:
    int x;
    int y;

public:
    Joueur(int x, int y);

    void afficher();
    void deplacerX(int valeur);
    void deplacerY(int valeur);
};

#endif