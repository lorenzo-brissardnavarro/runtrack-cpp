#include <iostream>
using namespace std;

int main(void){
    int i, n, sum;
    sum = 0;
    i = 0;

    // Boucle WHILE
    while(i < 4){
        cout << "Donnez un entier : ";
        cin >> n;
        sum+= n;
        i++;
    }
    cout << "Somme : " << sum;

    // Boucle DO-WHILE
    do {
        cout << "Donnez un entier : ";
        cin >> n;
        sum+= n;
        i++;
    }  while(i < 4);
    cout << "Somme : " << sum;
}