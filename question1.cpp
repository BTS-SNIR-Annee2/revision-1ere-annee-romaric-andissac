#include <iostream>

int main() {

    int a = 12;
    int b = 5;
    int temp;
    
    std::cout << "avant : " << a << " " << b << "\n";
    
    temp = a;
    a = b;
    b = temp;
    
    std::cout << "apres : " << a << " " << b  << "\n";
}
