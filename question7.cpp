#include <iostream>

using namespace std;

int main() {

    int nbUser1;
    int nbUser2;
    
    cout << "Entrez un premier nombre: ";
    cin >> nbUser1;
    
    cout << "Entrez un second nombre: ";
    cin>> nbUser2;
    
    if((nbUser1 == 0) or (nbUser2 == 0)){
        cout << "null" << endl;
    }
    else if((nbUser1 < 0 and nbUser2 > 0) or (nbUser1 > 0 and nbUser2 < 0)) {
        cout << "negatif" << endl;
    }
    else{
        cout << "positif" << endl;
    }
}
