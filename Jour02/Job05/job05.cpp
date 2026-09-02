#include <iostream>
using namespace std;

int main(void){
    int note;
    do {
        cout << "Quelle est votre note ?" << endl;
        cin >> note;
    }  while(note < 0 || note > 20);
    
    if(note > 10){
        cout << "Valide";
    } else {
        cout << "Non valide";
    }
}