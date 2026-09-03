#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int a;
    int total = 0;
    cout << "Choisissez un nombre : ";
    cin >> a;
    while (1 > a) {
        cout << "SVP un nombre positif" << endl;
        cout << "Choisissez un nombre : ";
        cin >> a;
    }
    string text = to_string(a);
    int longueur = text.length();
    for (int i = 0 ; i < longueur ; i++){
        int chiffre = text[i] - '0';
        total += pow(chiffre, longueur);
    }
    cout << "Nombre de depart = " << a << " et total = " << total << endl;
    if(total == a){
        cout << "Le nombre " << a << " est narcissique" << endl;
    } else {
        cout << "Le nombre " << a << " n'est pas narcissique" << endl;
    }
    
}