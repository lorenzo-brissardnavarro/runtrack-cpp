#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool estPalindrome(string mot){
    string mot2 = mot;
    int compteur = 0;
    for(int i = mot.length()-1 ; i >= 0 ; i--){
        mot2[i] = mot[compteur];
        compteur++;
    }
    for(int j = 0 ; j < mot.length() ; j++){
        if(mot[j] != mot2[j]){
            return false;
        }
    }
    return true;
}

int main() {
    string tab[5] = {"radar", "hello", "lvel", "stats", "world"};
    vector<string> finalArray;
    for(int i = 0 ; i < 5 ; i++){
        if(estPalindrome(tab[i])){
            cout << tab[i] << " est un palindrome" << endl;
        }
    }
}