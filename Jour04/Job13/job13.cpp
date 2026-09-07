#include <iostream>
#include <vector>
using namespace std;

struct Voyage {
    string destination;
    float duree;
};

void ajoutVoyage(vector<Voyage*>& voyages){
    string destination;
    float duree;
    cout << "Destination : ";
    cin >> destination;
    cout << "Duree : ";
    cin >> duree;
    Voyage* n1 = new Voyage{destination, duree};
    voyages.push_back(n1);
}

void afficherVoyage(vector<Voyage*>& voyages) {
    Voyage** pointeurVecteur = voyages.data();
    cout << "Les infos sont : " << endl;
    for (int j = 0; j < voyages.size(); j++) {
        cout << "Pour visiter " << (*pointeurVecteur)->destination << " il faut faire " << (*pointeurVecteur)->duree << "h de trajet" << endl;
        pointeurVecteur++;
    }
}

void modifierVoyage(vector<Voyage*>& voyages) {
    Voyage** pointeurVecteur = voyages.data();
    for (int j = 0; j < voyages.size(); j++) {
        (*pointeurVecteur)->destination = "Venise";
        (*pointeurVecteur)->duree = 1.25;
        pointeurVecteur++;
    }
}

int main() {
    vector<Voyage*> voyages;
    
    int size;
    do {
        cout << "\nCombien de voyages voulez-vous ajouter ? ";
        cin >> size;
    } while(size < 1);

    for(int i = 0 ; i < size ; i++){
        ajoutVoyage(voyages);
    }

    afficherVoyage(voyages);
    modifierVoyage(voyages);
    cout << "\nApres modification :" << endl;
    afficherVoyage(voyages);
}