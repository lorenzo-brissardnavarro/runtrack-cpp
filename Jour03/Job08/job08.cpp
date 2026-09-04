#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string chaine;
    vector<char> tab;
    cout << "Tapez votre chaine de caractere : ";
    getline(cin, chaine);
    
    for(int i = 0 ; i < chaine.length() ; i++){
        tab.push_back(chaine[i]);
    }

    cout << "Le tableau contient : ";
    for(int j = 0 ; j < tab.size() ; j++){
        cout << tab[j] << " ";
    }
    
}