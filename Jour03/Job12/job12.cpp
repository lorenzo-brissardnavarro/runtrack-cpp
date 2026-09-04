#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    int random_number = dis(gen);
    int limit = 10;
    int attempt = 0;
    int proposal_number = 0;
    bool win = false;

    do {
        attempt++;
        cout << "Proposition de nombre : ";
        cin >> proposal_number;
        if(proposal_number > random_number){
            cout << "Trop grand" << endl;
        } else if(proposal_number < random_number){
            cout << "Trop petit" << endl;
        } else if(proposal_number == random_number) {
            win = true;
        }
    } while(attempt < limit && win != true);
        
    if(win){
        cout << "Bravo, vous avez trouve " << random_number << " en seulement " << attempt << " essais";
    } else {
        cout << "Dommage, il fallait trouver " << random_number << " mais vous avez fait vos " << limit << " essais";
    }

}