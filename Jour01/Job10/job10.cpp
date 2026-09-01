#include <iostream>
using namespace std;

int main(void){
    string values[3] = {"prix HT d'un kilo de carottes", "nombre de kilos de carottes", "taux de TVA"};
    float array[3];
    for(int i = 0 ; i <3 ; i++){
        cout << "Saisissez le " << values[i] << endl;
        cin >> array[i];
    }
    int ht = array[0] * array[1];
    int resultat = ht + ht * (array[2] / 100);
    cout << "Le montant total TTC est de " << resultat << " euros" << endl;
}