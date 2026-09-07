#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruits[5] = {"pomme", "fraise", "orange", "pasteque", "citron"};
    string* pointeurFruits = fruits;
    cout << "Dans le tableau fruits : ";
    for(int i = 0 ; i < 5 ; i++){
        cout << *pointeurFruits << " ";
        pointeurFruits++;
    }

    int size;
    string fruit;
    do {
        cout << "\nCombien avez-vous de fruits preferes ? ";
        cin >> size;
    } while(size < 1);
    
    string* favorites = new string[size];
    for(int i = 0 ; i < size ; i++){
        cout << "Fruit : ";
        cin >> fruit;
        favorites[i] = fruit;
    }

    string* pointeurFavorites = favorites;
    cout << "Les fruits favoris sont : ";
    for(int j = 0 ; j < size ; j++){
        cout << *pointeurFavorites << " ";
        pointeurFavorites++;
    }

    delete[] favorites;
}