//Napisz program w języku C++, który policzy z ilu cyfr składa się podana liczba całkowita (w zapisie dziesiętnym).

#include <iostream>

int main() {

    int value;
    int c = 0;
    std::cin >> value;

    do ++c; while(value /= 10);

    std::cout << c;

    return 0;
}