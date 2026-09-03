#include <iostream>
using namespace std;

int main() {
    int f1 = 0;
    int f2 = 1;
    int a, temp;
    cout << "Donnez la limite : ";
    cin >> a;
    while (a < 2) {
        cout << "SVP un nombre positif > 1" << endl;
        cout << "Donnez la limite : ";
        cin >> a;
    }
    for (float i = 0 ; i <= a ; i++){
        cout << "F(" << i << ") =  " << f1 << endl;
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
}