#include <iostream>
using namespace std;

int main() {
    int n1 = 10;
    int n2 = 20;
    int* p1 = &n1;
    int* p2 = &n2;
    cout << "Contenu avant modif, n1 = " << *p1 << " et n2 = " << *p2 << endl;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "Contenu avant modif, n1 = " << *p1 << " et n2 = " << *p2 << endl;
}