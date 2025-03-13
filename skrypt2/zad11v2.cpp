//Napisz program w języku C++, który stworzy i zainicjuje dwie liczby zmiennoprzecinkowe następującymi wartościami: 1/10, 1-9/10. 
//Następnie program powinien porównać ich wartości.

#include <iostream>

int main() {
    float a = 1.0f / 10.0f;
    float b = 1.0f - 0.9f; 

    if(a==b) {
        std::cout << "Liczby sa rowne\n";
    }   else {
        std::cout << "liczby NIE sa rowne\n";
    }

    return 0;

    
}