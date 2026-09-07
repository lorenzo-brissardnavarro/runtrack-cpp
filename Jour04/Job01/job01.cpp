#include <iostream>
using namespace std;

int main() {
    int number = 2019;
    int* p = &number;
    cout << "La valeur de 'number' est : " << *p;
}