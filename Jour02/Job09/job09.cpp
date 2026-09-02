#include <iostream>
using namespace std;

int main(void){
    int a, b, entier;
    cout << "Saisissez la valeur a : ";
    cin >> a;
    do {
        cout << "Saisissez la valeur b : ";
        cin >> b;
    }  while(b <= a);
    
    cout << "Saisissez la valeur de l'entier : ";
    cin >> entier;
    if(entier >= a && entier <= b){
        cout << "GAGNE";
    } else {
        cout << "PERDU";
    }
}