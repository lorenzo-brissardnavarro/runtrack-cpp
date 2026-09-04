#include <iostream>
#include <string>
using namespace std;

bool estInclus(string chaine1, string chaine2) {
    for (int i = 0; i <= chaine1.length() - chaine2.length(); i++) {
        bool correspond = true;
        for (int j = 0; j < chaine2.length(); j++) {
            if (chaine1[i + j] != chaine2[j]) {
                correspond = false;
                break;
            }
        }
        if (correspond) {
            return true;
        }
    }
    return false;
}

int main() {
    string chaine1;
    string chaine2;
    cout << "Tapez votre 1ere chaine de caractere : ";
    cin >> chaine1;
    cout << "Tapez votre 2eme chaine de caractere : ";
    cin >> chaine2;
    if(estInclus(chaine1, chaine2)){
        cout << "Verdict positif";
    } else {
        cout << "Verdict negatif";
    }
}