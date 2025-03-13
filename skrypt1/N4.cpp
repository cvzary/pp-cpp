#include <iostream>

int main() {
    int a;

    std::cin >> a;


    if(a == 0) {
        std::cout << "Nie dzielimy przez 0";
        return 1;
    }


    if(a % 6 == 0 || a % 3 == 0 || a % 2 == 0) {
    std::cout << "Liczba jest podzielna przez 6,3 lub 2";
    }   else {
    std::cout << " Liczba nie jest podzielna przez 6,3 lub 2";
    }

    return 0;
}