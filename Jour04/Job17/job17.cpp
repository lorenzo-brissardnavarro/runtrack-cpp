#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

int main() {
    //Version A
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
    
    vector<string> favorites;
    for(int i = 0 ; i < size ; i++){
        cout << "Fruit : ";
        cin >> fruit;
        favorites.push_back(fruit);
    }

    string* pointeurFavorites = favorites.data();
    cout << "Les fruits favoris sont : ";
    for(int j = 0 ; j < size ; j++){
        cout << *pointeurFavorites << " ";
        pointeurFavorites++;
    }

    // Version B
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

    auto favorites = make_unique<string[]>(size);
    for(int i = 0 ; i < size ; i++){
        cout << "Fruit : ";
        cin >> fruit;
        favorites[i] = fruit;
    }

    string* pointeurFavorites = favorites.get();
    cout << "Les fruits favoris sont : ";
    for(int j = 0 ; j < size ; j++){
        cout << *pointeurFavorites << " ";
        pointeurFavorites++;
    }
}