#include <iostream>
#include <string>
using namespace std;

int main() {
    string chaine, newChaine;
    cout << "Entrez une chaine de caracteres : ";
    cin >> chaine;
    char* lettre = &chaine[0];
    newChaine = chaine;
    for(int i = chaine.length()-1 ; i >= 0 ; i--){
        newChaine[i] = *lettre;
        lettre++;
    }
    cout << "Chaine inversee : " << newChaine << endl;
}