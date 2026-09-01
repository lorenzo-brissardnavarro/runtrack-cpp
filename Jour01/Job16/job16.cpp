#include <iostream>
using namespace std;

auto addition(int nb1, int nb2){
    return nb1 + nb2;
}

int main(void){
    auto a = 5 / 2;
    // -> renvoie 2 car 5 et 2 sont des entiers
    cout << a << endl;

    auto b = 5.0 / 2;
    // -> renvoie 2.5 car 5.0 est un double
    cout << b << endl;

    auto c = 'A' + 1;
    // -> renvoie 'B' car 'A' est un char
    cout << c << endl;
    // -> correction : renvoie le code ASCII de 'B' donc 66

    auto nb1 = 0;
    auto nb2 = 0;
    cout << "Nombre 1 : " << endl;
    cin >> nb1;
    cout << "Nombre 2 : " << endl;
    cin >> nb2;
    cout << "Le resultat de l'addition est : " << addition(nb1, nb2) << endl;
}