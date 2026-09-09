#include "Joueur.hpp"

int main() {
    Joueur personnage1;
    Joueur personnage2(1,2);
    Joueur personnage3(3,4, "personnage3");
    
    personnage1.afficher();
    personnage2.afficher();
    personnage3.afficher();
    return 0;
}