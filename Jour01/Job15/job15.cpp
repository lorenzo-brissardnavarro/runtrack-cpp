#include <iostream>
using namespace std;

int main(void){
    float prix_ht = 0;
    float kilos = 0;
    float saisie_tva = 0;
    cout << "Saisissez le prix HT d'un kilo de carottes : " << endl;
    cin >> prix_ht;
    cout << "Saisissez le nombre de kilos de carottes : " << endl;
    cin >> kilos;
    cout << "Saisissez le taux de TVA : " << endl;
    cin >> saisie_tva;
    const float tva = saisie_tva; 
    int ht = prix_ht * kilos;
    int resultat = ht + ht * (tva / 100);
    cout << "Le montant total TTC est de " << resultat << " euros" << endl;
}

// Erreur pour modifier une constante : job15.cpp: In function 'int main()': job15.cpp:6:11: error: assignment of read-only variable 'value' 6 | value = 25;