#include <iostream>
#include <string>
using namespace std;

int main() {
    string chaine = "vive la plateforme !";
    cout << "Transformation : '" << chaine << "' devient -> ";
    for(int i = 0 ; i < chaine.length() ; i++){
        chaine[i] = toupper(chaine[i]);
    }
    cout << "' " << chaine << " '";
}