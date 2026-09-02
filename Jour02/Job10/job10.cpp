#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "Donnez un nombre positif : ";
    cin >> a;
    while (a != 0) {
        if (a < 0) {
            cout << "SVP un nombre positif." << endl;
        } else {
            cout << "Sa racine carree est : " << sqrt(a) << endl;
        }
        cout << "Donnez un nombre positif : ";
        cin >> a;
    }
    return 0;
}
