#include <iostream>

int main() {

    int nbUtilisateur;
    int nbAuCarre;
    
    std::cout << "Donnez un nombre pour calculer sa valeur au carre\n";
    std::cin >> nbUtilisateur;
    nbAuCarre = nbUtilisateur * nbUtilisateur;
    std::cout << "\n" << "Le nombre " << nbUtilisateur << " au carre est egal a " << nbAuCarre << "\n";
}
