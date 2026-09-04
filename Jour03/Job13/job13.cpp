#include <iostream>
#include <vector>
using namespace std;

int main() {
    int minSize = 3;
    int array1[6] = {1,3,5,7,8,9};
    int array2[minSize] = {2,4,6};
    vector<int> finalArray;
    for(int i = 0 ; i < minSize ; i++){
        if(array1[i] > array2[i]){
            finalArray.push_back(array2[i]);
            finalArray.push_back(array1[i]);
        } else{
            finalArray.push_back(array1[i]);
            finalArray.push_back(array2[i]);
        }
    }
    for(int i = minSize ; i < 6 ; i++){
        finalArray.push_back(array1[i]);
    }

    for(int i = minSize ; i < 3 ; i++){
        finalArray.push_back(array2[i]);
    }
    cout << "Le troisieme tableau contient : ";
    for(int j = 0 ; j < finalArray.size() ; j++){
        cout << finalArray[j] << " ";
    }
}