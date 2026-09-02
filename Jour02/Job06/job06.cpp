#include <iostream>
using namespace std;

int main(void){
    int n;
    cout << "Saisissez la valeur du n :" << endl;
    cin >> n;
    for (int i = 0 ; i < n+1 ; i++){
        if(i % 3 == 0){
            cout << i << " est un multiple de 3" << endl;
        } else if (i % 5 == 0) {
            cout << i << " est un multiple de 5" << endl;
        } else if (i % 3 == 0 || i % 5 == 0) {
            cout << i << " est un multiple de 3 et de 5" << endl;
        } else {
            cout << i << " n'est pas un multiple de 3 et de 5" << endl;
        }
    }
}