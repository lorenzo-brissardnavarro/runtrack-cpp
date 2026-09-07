#include <iostream>
using namespace std;

int main() {
    int m_integer = 17;
    float m_float = 3.14;
    double m_double = 123.345;
    const char* m_character = "La Plateforme";
    int* p1 = &m_integer;
    float* p2 = &m_float;
    double* p3 = &m_double;
    cout << "Integer : adresse = " << p1 << " et valeur = " << *p1 << endl;
    cout << "Float : adresse = " << p2 << " et valeur = " << *p2 << endl;
    cout << "Double : adresse = " << p3 << " et valeur = " << *p3 << endl;
    cout << "Char : adresse = " << &m_character << " et valeur = " << m_character << endl;
}