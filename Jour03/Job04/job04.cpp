#include <iostream>
#include <string>
using namespace std;

int main() {
    //Avec string
    string chaine = "vive la plateforme !";
    int compteur = 0;
    for(int i = 0 ; i < chaine.length() ; i++){
        compteur++;
    }
    cout << "La taille est " << compteur << endl;

    // Avec char
    char chaine2[] = "bonjour";
    int compteur2 = 0;
    for(int i = 0 ; chaine2[i] != '\0' ; i++){
        compteur2++;
    }
    cout << "La taille est " << compteur2;

}