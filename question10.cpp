#include <iostream>

using namespace std;

int main() {

    int nbUser;
    
    do{
        
        cout << "Donnez un nombre: ";
        cin >> nbUser;
    }while( !(nbUser < 20 and nbUser > 10) );
}
