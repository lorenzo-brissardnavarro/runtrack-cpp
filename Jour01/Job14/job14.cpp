#include<iostream>
#include<string>
using namespace std; 

int main() { 
    string str="";
    string new_str = "";
    cout << "Choisissez votre nombre " << endl;
    cin >> str;
    for(int i = str.length() - 1; i >= 0; i--){
       new_str+= str[i];
    }
    cout << "L'inverse de " << str << " est " << new_str << endl;
}