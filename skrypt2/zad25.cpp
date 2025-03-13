//Napisz program w języku C++, który pobierze ze standardowego wejścia liczbę całkowitą,
//a następnie wyświetli czy jest ona podzielna bez reszty przez 6, 3 lub 2.

#include <iostream>

int main() {
    int value;
    std::cin >> value;
    if(value % 6 == 0) {
        std::cout << "Liczba jest podzielna bez reszty przez 6." << std::endl;
    }
    else if(value % 3 == 0) {
        std::cout << "Liczba jest podzielna bez reszty przez 3." << std::endl;
    }
    else if(value % 2 == 0) {
        std::cout << "Liczba jest podzielna bez reszty przez 2." << std::endl;

    } else {
                std::cout << "Liczba nie jest podzielna bez reszty przez 2,3 ani 6." << std::endl;

    }
    return 0;
}

