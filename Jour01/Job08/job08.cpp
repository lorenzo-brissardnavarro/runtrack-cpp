#include <iostream>
using namespace std;

int main(void){
    int year = 0;
    string text = "";
    cout << "Quelle annee souhaitez-vous tester ? " << endl;
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        text = "bissextile";
    } else {
        text = "non bissextile";
    }
    cout << "L'annee " << year << " est " << text << endl;
}