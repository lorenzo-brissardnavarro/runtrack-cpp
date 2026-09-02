#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    int total = 1;
    cout << "Donnez un nombre positif : ";
    cin >> a;
    while (a < 0) {
        cout << "SVP un nombre positif." << endl;
        cout << "Donnez un nombre positif : ";
        cin >> a;
    }
    for (int i = 1 ; i <= a ; i++){
        total *= i;
    }
    cout << "Le resultat de " << a << "! est " << total << endl;
}
