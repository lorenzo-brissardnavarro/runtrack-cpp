#include "Joueur.hpp"

int main() {
    Joueur personnage(1,1);
    personnage.afficher();
    personnage.deplacerX(3);
    personnage.deplacerY(2);
    personnage.afficher();
    return 0;
}