#include <iostream>
using namespace std;

int main(void){
    int array[3];
    for(int i = 0 ; i <3 ; i++){
        cout << "Saisissez votre nombre " << i+1 << endl;
        cin >> array[i];
    }
    int max = array[0];
    for(int i = 1 ; i <3 ; i++) {
        if(max < array[i]){
            max = array[i];
        }
    }
    cout << "Le plus grand nombre saisi est : " << max << endl;
}