#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point n1 = {10, 20};
    Point* p1 = &n1;
    cout << "Contenu avant modif, x = " << p1->x << " et y = " << p1->y << endl;
    p1->x = 100;
    p1->y = 200;
    cout << "Contenu apres modif, x = " << p1->x << " et y = " << p1->y << endl;
}