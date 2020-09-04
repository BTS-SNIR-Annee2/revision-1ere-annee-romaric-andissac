#include <iostream>

using namespace std;

int main() {

    int nbUser;
    
    cout << "Donnez un nombre positif ou negatif: ";
    cin >> nbUser;
    
    if(nbUser == 0){
        cout << "Null" << endl;
    }
    else if(nbUser > 0){
        cout << "Positif" << endl;
    }
    else{
        cout << "Negatif" << endl;
    }
}
