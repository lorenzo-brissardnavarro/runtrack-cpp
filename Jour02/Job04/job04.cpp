#include <iostream>
using namespace std;

int main(void){
    float nb1, nb2, total;
    char op;
    cout << "Nombre 1 : ";
    cin >> nb1;
    cout << "Operateur : ";
    cin >> op;
    cout << "Nombre 2 : ";
    cin >> nb2;
    
    switch(op) {
        case '+':
            total = nb1 + nb2;
            break;
        case '-':
            total = nb1 - nb2;
            break;
        case '*':
            total = nb1 * nb2;
            break;
        case '/':
            total = nb1 / nb2;
            break;
        default:
            cout << "Opération non disponible" << endl;
            return 0;
    }
    cout << nb1 << " " << op << " " << nb2 << " = " << total << endl;
}