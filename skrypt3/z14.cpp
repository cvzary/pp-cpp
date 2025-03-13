//Napisz program w języku C++, który wyświetli tabliczkę mnożenia od 0x0 do 10x10 zachowując poprawne odstępy.
#include <iostream>
#include <iomanip> //setw()
int main() {
    const int size = 11;
    const int value_width = 4;
    
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j)
            std::cout << std::setw(value_width) << i * j;
        std::cout << std::endl;
    }

    return 0;
}