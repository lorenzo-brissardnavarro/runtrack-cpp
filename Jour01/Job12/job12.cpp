#include <iostream>
using namespace std;

int main(void){
    float number = 0;
    float total = 0;
    for(int i = 0 ; i < 5 ; i++){
        cout << "Saisissez votre nombre " << i+1 << endl;
        cin >> number;
        total+= number;
    }
    cout << "La moyenne est de " << total / 5 << endl;
}