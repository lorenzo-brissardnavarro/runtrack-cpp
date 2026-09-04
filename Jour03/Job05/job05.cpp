#include <iostream>
#include <string>
using namespace std;

int main() {
    string chaine = "";
    bool verdict = true;
    cout << "Quelle est votre heure ? " << endl;
    cin >> chaine;
    while (chaine.length() != 5) {
        cout << "5 caracteres SVP" << endl;
        cout << "Quelle est votre heure ? " << endl;
        cin >> chaine;
    }
    char milieu = chaine[2];
    if (milieu != 'h') {
        verdict = false;
    }
    chaine.erase(2,1);
    for(int i = 0 ; i < chaine.length() ; i++){
        if(!(isdigit(chaine[i]))){
            verdict = false;
        }
    }
    if(verdict){
        cout << "L'heure saisie est exacte" << endl;
    } else {
        cout << "L'heure saisie n'est pas exacte" << endl;
    }
    
}