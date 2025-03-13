#include <iostream>

int main() {
    int a, b;
    std::cout << "Prosze podac dlugosci bokow prostokata: ";
    std::cin >> a >> b;
    
        if(std::cin.fail()) {
    std::cout << "Wprowadzono nieprawidlowe dane!";
    }

        else {
    std::cout << "Dlugosc bokow wynosi: " << a*b << std::endl;
        }
    
return 0;

}