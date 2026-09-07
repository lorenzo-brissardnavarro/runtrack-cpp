#include <iostream>
using namespace std;

int main() {
    int n1 = 1;
    int n2 = 10;
    int n3 = 100;
    int* p1 = &n1;
    int* p2 = &n2;
    int* p3 = &n3;
    cout << "Contenu avant modif, n1 = " << *p1 << " ,n2 = " << *p2 << " et n3 = " << *p3 << endl;
    *p1 = 2;
    *p2 = 20;
    *p3 = 200;
    cout << "Contenu apres modif, n1 = " << *p1 << " ,n2 = " << *p2 << " et n3 = " << *p3 << endl;
}