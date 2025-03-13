//Napisz program w języku C++, który przyjmuje jedno bajtową liczbę całkowitą 
//oraz jedno bajtową liczbę całkowitą bez znaku. 
//Program powinien wyświetlić wartość wczytanych zmiennych.
//nie do konca dziala
#include <iostream>

typedef unsigned char uchar; // typedef pozwala stworzyc alias czyli wpisujac uchar kompilator potraktuje to jako unsigned char

int main() {

    char v1;
    uchar v2;
    std::cin >> v1 >> v2;
    std::cout << "Liczba ze znakiem: " << static_cast<int>(v1) << std::endl;
    std::cout << "Liczba bez znaku: " << static_cast<int>(v2) << std::endl;

    return 0;
}