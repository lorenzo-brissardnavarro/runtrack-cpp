#include <iostream>
using namespace std;

int main(void){
    int m = 0;
    int n = 0;
    int bis = 0;
    cout << "Saisissez la valeur de n : " << endl;
    cin >> n;
    cout << "Saisissez la valeur de m : " << endl;
    cin >> m;
    bis = m;
    m = n;
    n = bis;
    cout << "Valeur de n : " << n << endl;
    cout << "Valeur de m : " << m << endl;
}