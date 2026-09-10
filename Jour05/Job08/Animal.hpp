#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
using namespace std;

// Classe abstraite
class Animal {

public:

    virtual void crier() = 0;
    virtual void manger() = 0;
};

// Classe enfant chien qui hérite de la classe Animal
class Chien : public Animal {

public:

    void crier();
    void manger();
};

// Classe enfant chat qui hérite de la classe Animal
class Chat : public Animal {

public:

    void crier();
    void manger();
};

#endif