#include <iostream>
using namespace std;

int main() {
    int n = 1;
    cin >> n;
    switch(n){
        case 0:
            cout << "Nul\n";
        case 1:
        case 2:
            cout << "Petit\n";
            break;
        case 3:
        case 4:
        case 5:
            cout << "Moyen\n";
        default:
            cout << "Grand\n";
    }
    
}

// Resultats :
// n = 0 -> affiche "Nul" + "Petit"
// n = 1 -> affiche "Petit"
// n = 4 -> affiche "Moyen" + "Grand"
// n = 10 -> affiche "Grand"
// n = -5 -> affiche "Grand"