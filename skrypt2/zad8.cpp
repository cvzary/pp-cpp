//Napisz program w języku C++, który obliczy pole sześciokąta foremnego. 
//Program powinien wczytać długości boku od użytkownika, a następnie wyświetlić wynik.

#include <iostream>
#include <cmath>

int main() {
    int a;
    std::cin >> a;
    std::cout << "Pole wynosi: " << 3 * pow(a, 2) * sqrt(3) / 2 << std::endl;

    return 0;
}