#include "Personne.hpp"
#include <iostream>
using namespace std;

int main() {
    Personne mario("Mario", 15, 2.87);
    Personne luigi("Luigi", 10, 2.14);
    Personne bowser("Bowser", 23, 3.05);
    mario.afficher();
    luigi.afficher();
    bowser.afficher();
    cout << "Apres modif des points de vie de Mario : " << endl;
    mario.setNbPointsVie(13);
    cout << "Mario possede desormais " << mario.getNbPointsVie() << " points de vie" << endl;;
    cout << "Luigi decide de se transformer en Gluigi pour se faufiler" << endl;
    luigi.setNom("Gluigi");
    cout << "Luigi possede desormais l'apparence et le nom de " << luigi.getNom();
    
    return 0;
}