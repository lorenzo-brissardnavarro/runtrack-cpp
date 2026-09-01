#include <iostream>
using namespace std;

int main(void){
    int number = 0;
    int total = 0;
    cout << "Choisissez votre nombre " << endl;
    cin >> number;
    if(number < 5){
        cout << "Impossible de faire le calcul car " << number << " < 5" << endl;
    } else {
        for(int i = 5 ; i <= number ; i++){
            total += i*i*i;
        }
        cout << "La somme de 5^3 a " << number << "^3 vaut " << total << endl;
    }
}