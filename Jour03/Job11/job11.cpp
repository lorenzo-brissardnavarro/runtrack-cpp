#include <iostream>
using namespace std;

int main() {
    int tab[6] = {1, 2, 3, 4, 5, 6};
    int somme = 0;
    for(int i = 0 ; i < 6 ; i++){
        if(tab[i] % 2 == 0){
            somme += tab[i];
        }
    }
    cout << "La somme des nombres pairs donne : " << somme;
}