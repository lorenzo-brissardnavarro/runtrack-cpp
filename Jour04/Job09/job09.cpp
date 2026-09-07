#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> tab;
    int size, nb;
    do {
        cout << "Taille du tableau : ";
        cin >> size;
    } while(size < 1);
    
    for(int i = 0 ; i < size ; i++){
        cout << "Nombre : ";
        cin >> nb;
        tab.push_back(nb);
    }

    int* p = tab.data();
    cout << "Le tableau contient : ";
    for(int j = 0 ; j < tab.size() ; j++){
        cout << *p << " ";
        p++;
    }
}