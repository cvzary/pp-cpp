//Napisz program w języku C++, który narysuje na ekranie choinkę zbudowaną z gwiazdek * o zadanej wysokości.

#include <iostream>
int main() {
    unsigned int height;
    std::cin >> height;

    for(unsigned int i = 0; i < height; ++i) {
        for(int j = 0; j < height - i - 1; ++j) std::cout << " ";
        for(unsigned int j = 0; j < 2 * i + 1; ++j) std::cout << "*";
        std::cout << std::endl;
    }
    
    for(unsigned int i = 0; i < height - 1; ++i) {
        std::cout << " "; 
    } 
    std::cout << "*" << std::endl;
    return 0;
}