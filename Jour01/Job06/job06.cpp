#include <iostream>
using namespace std;

int multiplication_table(int number){
    for(int i = 0 ; i < 11 ; i++){
        cout << number << " X " << i << " = " << number * i << endl;
    }
    return 0;
}

int main(void){
    int number = 0;
    cout << "De quel nombre souhaitez-vous connaitre la table de multiplication ? " << endl;
    cin >> number;
    multiplication_table(number);
}