//Napisz program w języku C++, który przyjmie dwie pary: rok i liczbę tranzystorów opisujące dwa procesory.
// Program powinien wyświetlić co ile miesięcy podwajałaby się liczba tranzystorów, gdyby wziąć pod uwagę wyłącznie te dwa procesory.

#include <iostream>
#include <cmath>

int main() {

    int year_0, year_1;
    double num_transistors_0, num_transistors_1;

    std::cout << "Podaj rok i liczbe tranzystorow pierwszego procesora. ";
    std::cin >> year_0 >> num_transistors_0;
    std::cout << "Podaj rok i liczbe tranzystorow drugiego procesora. ";
    std::cin >> year_1 >> num_transistors_1;

    if(year_0 > year_1) {
        std::swap(year_0, year_1);
        std::swap(num_transistors_0, num_transistors_1);
    }

    int num_years = year_1 - year_0;
    double num_doublings = log2(num_transistors_1 / num_transistors_0);
    double doublings_period = num_years * 12 / num_doublings;

    std::cout << "liczba podwojen: " << num_doublings << std::endl;
    std::cout << "okres podwojen w miesiacach: " << doublings_period << std::endl;


    return 0;

}

