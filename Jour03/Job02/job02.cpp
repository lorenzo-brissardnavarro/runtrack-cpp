#include <iostream>
#include <string>
using namespace std;

int main() {
    char array[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    string chaine = "vive la plateforme !";
    cout << "Transformation : '" << chaine << "' devient -> ";
    for(int i = 0 ; i < chaine.length() ; i++){
        for(int j = 0 ; j < 6 ; j++){
            if(array[j] == chaine[i]){
                chaine.erase(i,1);
            }
        }
    }
    cout << "' " << chaine << " '";
}