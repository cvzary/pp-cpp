/*Napisz funkcję w języku C++ wyświetlającą cyfry, z których składa się liczba całkowita przekazana w argumencie do tej funkcji.*/

#include <iostream>
#include <cmath>

void displayDigits(int number) {
    number = abs(number);
    while(number) {
        std::cout << number % 10 << " ";
        number /= 10;
    }
    std::cout << std::endl;
}

int main() {
    int number = -4536;
    displayDigits(number);
    return 0;
}