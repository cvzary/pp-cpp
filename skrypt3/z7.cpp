//Napisz program w języku C++, który sprawdzi parzystość liczby wczytanej od użytkownika.
//Program powinien wyświetlić Parzysta, jeśli liczba jest parzysta w innym przypadku program nie powinien wyświetlać nic.

#include <iostream>

int main() {
    int n;

    std::cin >> n;
    if(n % 2 == 0) {
        std::cout << "Parzysta";
    }

    return 0;
}

