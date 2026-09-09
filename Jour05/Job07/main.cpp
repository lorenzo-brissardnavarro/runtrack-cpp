#include "Contact.hpp"
#include <iostream>
using namespace std;

int main() {
    Contact jean("Jean", 601010101);
    Contact marc("Marc", 602020202);
    Contact laure("Laure", 603030303);
    Contact jeanBis = jean;
    Contact marcBis = marc;
    Contact laureBis = laure;
    jeanBis.setNom("JeanBis");
    jeanBis.setNumero(604040404);
    marcBis.setNom("MarcBis");
    marcBis.setNumero(605050505);
    laureBis.setNom("LaureBis");
    laureBis.setNumero(606060606);
    jean.afficher();
    marc.afficher();
    laure.afficher();
    jeanBis.afficher();
    marcBis.afficher();
    laureBis.afficher();
    return 0;
}