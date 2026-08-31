#include <iostream>
using namespace std;

int multiplication(int nb1, int nb2){
    return nb1 * nb2;
}

int main(void){
    int nb1 = 0;
    int nb2 = 0;
    cout << "Nombre 1 : " << endl;
    cin >> nb1;
    cout << "Nombre 2 : " << endl;
    cin >> nb2;
    cout << "Le resultat de la multiplication est : " << multiplication(nb1, nb2) << endl;
}