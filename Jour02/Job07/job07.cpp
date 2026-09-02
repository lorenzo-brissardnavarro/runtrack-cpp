#include <iostream>
using namespace std;

int main(void){
    int a, b, max;
    cout << "Saisissez la valeur 1 :";
    cin >> a;
    cout << "Saisissez la valeur 2 :";
    cin >> b;
    if(a > b){
        max = a;
        a = b;
        b = max;
    }
    for ( ; a < b+1 ; a++){
        cout << a << endl;
    }
}