#include <iostream>
using namespace std;

int main(void){
    int number = 0;
    string parite = "";
    cout << "Quel chiffre/nombre souhaitez-vous tester la parite ? " << endl;
    cin >> number;
    if(number % 2 == 0){
        parite = "pair";
    } else {
        parite = "impair";
    }
    cout << "Le chiffre/nombre " << number << " est " << parite << endl;
}