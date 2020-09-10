#include <iostream>

using namespace std;

int main() {

    int nbUser;
    int tab[19];
    int nbMax;
    int nbLigne;
    
    for(int i=0; i<20; i++){
    
    cout << "Entrez le nombre numero " << i + 1 << " : ";
    cin >> nbUser; 
    tab[i] = nbUser;
    
        if(tab[i] > nbMax){
        nbMax = tab[i];
        nbLigne = i;
        }
    }
    cout << "Le plus grand de ces nombres est : " << nbMax << " a la ligne " << nbLigne + 1 << endl;
}
