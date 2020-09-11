#include <iostream>

using namespace std;

int main() {

    int tab[8];
    
    for(int i(1); i<=9;i++) {
        cout << "Entrez un nombre dans la " << i << "e case du tableau : ", cin >> tab[i];
    }
}

