#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> T;
    int nb, max = 0;
    for(int i = 0 ; i < 10 ; i++){
        cout << "Nombre " << i+1 << " : ";
        cin >> nb; 
        T.push_back(nb);
        if(T[i] > T[max]){
            max = i;
        }
    }
    cout << "Dans le tableau contenant : ";
    for(int j = 0 ; j < T.size() ; j++){
        cout << T[j] << " ";
    }
    cout << "le maximum est " << T[max] << " et il possede l'indice " << max; 
}