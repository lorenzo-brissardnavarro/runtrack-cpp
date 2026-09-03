#include <iostream>
using namespace std;

int main() {
    int espaces = 5;
    for (int i = 1 ; i <= espaces ; i++){
        cout << " ";
    }
    for (int i = 1 ; i <= 10 ; i++){
        cout << i;
        for (int i = 1 ; i <= espaces ; i++){
            cout << " ";
        }
    }
    cout << "\n";
    for (int i = 1 ; i <= 70 ; i++){
        cout << "-";
    }
    cout << "\n";
    for (int j = 1 ; j <= 10 ; j++){
        cout << " " << j;
        if(j >= 10){
            for (int i = 1 ; i <= espaces-3 ; i++){
                cout << " ";
            }
        } else {
            for (int i = 1 ; i <= espaces-2 ; i++){
                cout << " ";
            }
        }
        for (int k = 1 ; k <= 10 ; k++){
            cout << j * k;
            if(j*k >= 10){
                for (int i = 1 ; i <= espaces-1 ; i++){
                    cout << " ";
                }
            } else {
                for (int i = 1 ; i <= espaces ; i++){
                    cout << " ";
                }
            }
            if (k == 10) {
                cout << "\n";
            }
        }
    }
}