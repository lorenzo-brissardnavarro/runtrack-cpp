#include <iostream>
#include <vector>
using namespace std;

struct Note {
    string lastname;
    string firstname;
    double note;
};

void ajoutNote(vector<Note>& notes){
    string lastname, firstname;
    double note;
    cout << "Nom de famille : ";
    cin >> lastname;
    cout << "Prenom : ";
    cin >> firstname;
    cout << "Note : ";
    cin >> note;
    Note n1 = {lastname, firstname, note};
    notes.push_back(n1);
}

void afficherNotes(vector<Note>& notes) {
    Note* pointeurVecteur = notes.data();
    cout << "Les notes sont : ";
    for (int j = 0; j < notes.size(); j++) {
        cout << pointeurVecteur->note << " ";
        pointeurVecteur++;
    }
    cout << endl;
}

void supprimerNote(vector<Note>& notes) {
    string lastname;
    cout << "Nom de famille de la personne dont il faut supprimer la note : ";
    cin >> lastname;
    Note* pointeurVecteur = notes.data();
    for (int i = 0; i < notes.size(); i++) {
        if (pointeurVecteur->lastname == lastname) {
            notes.erase(notes.begin() + i);
            return;
        }
        pointeurVecteur++;
    }
}

void afficherMoyenne(vector<Note>& notes){
    double total = 0;
    Note* pointeurVecteur = notes.data();
    for (int i = 0; i < notes.size(); i++) {
        total+= pointeurVecteur->note;
        pointeurVecteur++;
    }
    if(notes.size() == 0){
        cout << "Aucune note disponible pour le moment" << endl;
    } else {
        cout << "La moyenne des notes vaut " << total / notes.size() << endl;
    }
}

int main() {
    vector<Note> notes;
    int choice;

    do {
        cout << "Menu :" << endl;
        cout << "1. Ajouter une note" << endl;
        cout << "2. Afficher la liste de notes" << endl;
        cout << "3. Supprimer une note d'un etudiant" << endl;
        cout << "4. Afficher la moyenne des notes" << endl;
        cout << "5. Quitter" << endl;
        cout << "Choix : ";
        cin >> choice;
        switch(choice) {
            case 1:
                ajoutNote(notes);
                break;
            case 2:
                afficherNotes(notes);
                break;
            case 3:
                supprimerNote(notes);
                break;
            case 4:
                afficherMoyenne(notes);
                break;
        }
    } while(choice != 5);
}