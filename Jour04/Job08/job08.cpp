#include <iostream>
#include <string>
using namespace std;

struct Ecole {
    int date;
    string nom;;
    float nb;
    string type;
};

int main() {
    Ecole n1 = {2019, "La Plateforme", 3.14, "Etudiants"};
    Ecole* p1 = &n1;
    cout << "Date : adresse = " << &p1->date << " et valeur = " << p1->date << endl;
    cout << "Nom : adresse = " << &p1->nom << " et valeur = " << p1->nom << endl;
    cout << "Nb : adresse = " << &p1->nb << " et valeur = " << p1->nb << endl;
    cout << "Type : adresse = " << &p1->type << " et valeur = " << p1->type << endl;
}