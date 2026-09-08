#include <iostream>
using namespace std;

int main() {
    int array[5] = {1, 6, 3, 4, 5};
    int (&refArray)[5] = array;
    int max = refArray[0];
    int& refMax = max;
    cout << "Contenu du tableau : " << endl;
    for(int i = 0 ; i < 5 ; i++){
        cout << refArray[i] << " ";
        if(refArray[i] > refMax){
            refMax = refArray[i];
        }
    }
    cout << "\nLe maximum du tableau est " << max << endl;
}