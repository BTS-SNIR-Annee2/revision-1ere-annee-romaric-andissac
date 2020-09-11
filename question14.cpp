#include <iostream>

using namespace std;

int main() {

    int p(0);
    int n(0);
    int resultn(1);
    int resultp(1);
    int result(1); 
    int np(1);
    int x;
    int y;
    
    cout << "Entrez le nombre de chevaux partants : ";
    cin >> n;
    cout << "Entrez le nombre de chevaux joues : ";
    cin >> p; 
    
    for (int i = 1 ;i <= n;i++) {
        resultn *= i;
        }
        
    for (int i = 1 ;i <= p;i++) {
        resultp *= i;
        }
     
    for (int i = 1 ;i <= (n - p);i++) {
        np *= i;
        }
    
    
    
    x = resultn / np;
    y = resultn / (resultp * np);
    
    cout << "Dans l'ordre : une chance sur " << x << " de gagner" << endl;
    cout << "Dans le desordre : une chance sur " << y << " de gagner" << endl; 
           
}



