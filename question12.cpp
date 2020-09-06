#include <iostream>

using namespace std;

int main() {

    int nbUser;
    
    cout << "Entrez un nombre: ";
    cin >> nbUser;
    
    for(int i = 1;i < 11;i++){
    
        cout << nbUser + i << endl;
    }
}
