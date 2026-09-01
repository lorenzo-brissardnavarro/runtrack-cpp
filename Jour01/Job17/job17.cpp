#include <iostream>
using namespace std;

int main(void){
    int a = 5;
    cout << "a = " << a << endl;

    int b = a;
    b = 20;
    cout << "a = " << a << " et b = " << b << endl;

    int& r = a;
    r = 30;
    cout << "a = " << a << " ,b = " << b << " et r = " << r << endl;

    int& s;
}

// Nombre de cases mémoire distinctes : 
// -> a est un int donc 4 octets
// -> b est un int donc 4 octets
// -> r est une référence, un alias pour une variable existante donc 0 octet supplémentaire
// -> 2 cases mémoire distinctes (a et b)

// Message d'erreur : job17.cpp: In function 'int main()': job17.cpp:16:10: error: 's' declared as reference but not initialized 16 | int& s;
// -> Une référence doit être initialisée lors de sa déclaration en faisant référence à une variable existante.