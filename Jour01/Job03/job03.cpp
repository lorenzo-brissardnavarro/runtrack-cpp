#include <iostream>
using namespace std;

int main(void){
    int n = 0;
    cout << "Nombre tours : " << endl;
    cin >> n;
    if(n <= 0) {
       cout << "n <= 0" << endl; 
    } else {
        for(n ; n >0 ; n--){
            cout << "Hello World" << endl;
        }
    }
}