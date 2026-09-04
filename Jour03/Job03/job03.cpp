#include <iostream>
#include <string>
using namespace std;

int main() {
    string chaine1 = "vive la plateforme !";
    string chaine2 = "vive la plateform !";
    for(int i = 0 ; i < chaine1.length() ; i++){
        if(chaine1[i] != chaine2[i]){
            cout << "different";
            return 1;
        }
    }
    cout << "identique";
    return 0;
}