#include <iostream>
using namespace std;

int main() {
    float a;
    float total = 1;
    cout << "Donnez un nombre positif : ";
    cin >> a;
    while (a < 1) {
        cout << "SVP un nombre positif." << endl;
        cout << "Donnez un nombre positif : ";
        cin >> a;
    }
    for (float i = 2 ; i <= a ; i++){
        total += (1/i);
    }
    cout << "Le resultat de la suite harmonique avec n = " << a << " est " << total << endl;
}
