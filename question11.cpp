#include <iostream>

using namespace std;

int main() {

    int nbUser;
    int i = 1;
    
    cout << "Entrez un nombre: ";
    cin >> nbUser;
    
    while(i < 11) {
    
        cout << nbUser + i << endl;
        i++;
    }
}
