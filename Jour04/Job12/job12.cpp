#include <iostream>
#include <string>
using namespace std;

struct Staff {
    string lastname;
    string firstname;
};

struct Student {
    string nom;
    string prenom;
};

void ajoutEleve(Student* students, int i){
    string nom, prenom;
    cout << "Nom de famille : ";
    cin >> nom;
    cout << "Prenom : ";
    cin >> prenom;
    Student n1 = {nom, prenom};
    students[i] = n1;
}

int main() {
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};
    Staff* pointeurAlicia = &alicia;
    Staff* pointeurPierre = &pierre;
    cout << "Staff 1 = " << pointeurAlicia->firstname << endl;
    cout << "Staff 2 = " << pointeurPierre->firstname << endl;

    int size;
    do {
        cout << "\nCombien d'eleves voulez-vous ajouter ? ";
        cin >> size;
    } while(size < 1);

    Student* students = new Student[size];
    for(int i = 0 ; i < size ; i++){
        ajoutEleve(students, i);
    }

    Student* pointeurStudents = students;
    cout << "Les prenoms des etudiants sont : ";
    for(int j = 0 ; j < size ; j++){
        cout << pointeurStudents->prenom << " ";
        pointeurStudents++;
    }

    delete[] students;
}