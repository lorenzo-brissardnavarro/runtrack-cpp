#include <iostream>
#include <string>
using namespace std;

string lower(string chaine){
    for(int i = 0 ; i < chaine.length() ; i++){
        chaine[i] = tolower(chaine[i]);
    }
    return chaine;
}

int main() {
    string chaine;
    string chaine2 = "Bonjour";
    cout << "Tapez votre chaine de caractere : ";
    cin >> chaine;
    string temp = lower(chaine);
    chaine2 = lower(chaine2);
    int len;
    if(chaine.length() > chaine2.length()){
        len = chaine.length();
    } else {
        len = chaine2.length();
    }
    for(int j = 0 ; j < len ; j++){
        if(chaine2[j] > temp[j]){
            cout << "Dans l'ordre : " << chaine << " puis " << chaine2;
            return 0;
        }
        if(chaine2[j] < temp[j]){
            cout << "Dans l'ordre : " << chaine2 << " puis " << chaine;
            return 0;
        }
    }
    cout << "Les mots sont identiques";
}