#include <iostream>

using namespace std;

int main() {

    int nbUtilisateur;
    
    cout << "Entrez un nombre positif ou negatif: ";
    cin >> nbUtilisateur;
    
    if (nbUtilisateur > 0){
        cout << "\nVotre nombre est positif" << endl;
    }
    else{
        cout << "\nVotre nombre est negatif" << endl;
    }
    
}
