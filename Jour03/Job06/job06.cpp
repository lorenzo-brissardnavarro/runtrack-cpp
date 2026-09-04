#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> T;
    int nb, compteur = 0;
    for(int i = 0 ; i < 10 ; i++){
        cout << "Nombre " << i+1 << " : ";
        cin >> nb; 
        T.push_back(nb);
        if(nb >= 5){
            compteur++;
        }
    }
    cout << "Dans le tableau contenant : ";
    for(int j = 0 ; j < T.size() ; j++){
        cout << T[j] << " ";
    }
    cout << "il y a " << compteur << " nb >= 5"; 
}