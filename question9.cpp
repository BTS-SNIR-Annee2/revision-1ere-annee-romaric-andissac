#include <iostream>

using namespace std;

int main() {

    int age;
    
    cout << "Entrez l'age: ";
    cin >> age;
    
    if(age < 6){
        cout << "Null" << endl;
    }
    else if(age < 7){
        cout << "Poussin" << endl;
    }
    else if(age < 9){
        cout << "Pupille" << endl;
    }
    else if(age < 11){
        cout << "Minime" << endl;
    }
    else{
        cout << "Cadet" << endl;
    }
}
