#include <iostream>
using namespace std;

int main() {
    int x = 12;
    cout << "Avant modif, x = " << x << endl;
    int& reference = x;
    reference = 25;
    cout << "Apres modif, x = " << x << endl;
}