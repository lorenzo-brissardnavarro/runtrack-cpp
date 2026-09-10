#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
using namespace std;

// Classe abstraite
class Animal {

private:

    static int compteurAnimaux;

public:

    Animal(){
        compteurAnimaux++;
    }

    virtual void crier() = 0;
    virtual void manger() = 0;


    // Méthode statique
    static int totalAnimaux() {
        return compteurAnimaux;
    }


};



// Classe enfant chien qui hérite de la classe Animal
class Chien : public Animal {

public:


    void crier() override ;
    void manger() override;
};

// Classe enfant chat qui hérite de la classe Animal
class Chat : public Animal {

public:

    void crier() override;
    void manger() override;
};

#endif