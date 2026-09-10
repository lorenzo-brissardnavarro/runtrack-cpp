#include "Animal.hpp"
#include <iostream>
using namespace std;

int main() {
    Chien chien1;
    Chat chat1;
    chien1.manger();
    chat1.manger("des croquettes");
    chat1.manger("une souris");
}