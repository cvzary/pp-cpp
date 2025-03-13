//Napisz program w języku C++, który do jednobajtowej liczby całkowitej ze znakiem
// doda wartość 200. Wyświetl zmienną po zmianie, uzasadnij wynik.

#include <iostream>

int main() {
    char number = -56;
    number += 200;

    std::cout << static_cast<int>(number) << std::endl;

    return 0;
    
} //wwynik to -112 poniewaz zakres char to -128;127 i dochodzi do owijki