#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int* p = array;
    for(int i = 0 ; i < 5 ; i++){
        cout << "adresse = " << p << " et valeur = " << *p << endl;
        p++;
    }
}