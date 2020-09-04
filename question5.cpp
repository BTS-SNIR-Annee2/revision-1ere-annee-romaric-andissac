#include <iostream>

using namespace std;

int main() {

    float prix;
    float TVA;
    int nbArticle;
    float prixTTC;
    
    cout << "Inserez le prix HT de l'article: ";
    cin >> prix;
    
    cout << "Inserez le nombre d'article(s): ";
    cin >> nbArticle;
    
    cout << "Inserez la TVA (en 0 et 1): ";
    cin >> TVA;
    
    TVA++;
    prixTTC = (prix*TVA)*nbArticle;
    
    cout << "Le prix TTC est de: " << prixTTC << " €" << endl;
    
}
