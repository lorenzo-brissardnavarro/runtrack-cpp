#include <iostream>
using namespace std;

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int (&refArray)[5] = array;
    cout << "Contenu du tableau : " << endl;
    for(int i = 0 ; i < 5 ; i++){
        cout << refArray[i] << " ";
    }
}