#include "Animal.hpp"
#include <iostream>
using namespace std;

int main() {
    cout << "Au depart, total animaux = " << Animal::totalAnimaux() << endl;
    Chien chien1;
    Chat chat1;
    Chien chien2;
    Chat chat2;
    chien1.manger();
    cout << "Apres creation, total animaux = " << Animal::totalAnimaux() << endl;
}