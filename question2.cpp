#include <iostream>

int main() {

    int a = 1;
    int b = 2;
    int c = 3;
    int temp;
    
    std::cout << "avant : " << a << " " << b << " " << c << "\n";
    
    temp = b;
    b = a;
    a = b;
    a = c;
    c = temp;

    
    
    std::cout << "apres : " << a << " " << b  << " " << c << "\n";
}
