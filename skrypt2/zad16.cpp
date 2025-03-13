//Prawo Moore’a głosi, że liczba tranzystorów w procesorze podwaja się co 24 miesiące. 
//Jako punkt wyjścia załóżmy procesor Intel 4004 z 1971 roku, który wyposażony był w 2250 tranzystorów.
// Napisz program w języku C++, który przyjmie ze standardowego wyjścia rok i zwróci liczbę tranzystorów wynikającą z prawa Moore’a. 
//Zweryfikuj założenia prawa Moore’a z danymi historycznymi.

#include <iostream>
#include <cmath>

int main() {
    int year;
    std::cin >> year;

    if(year < 1971) {
        std::cout << "wprowadzono niepoprawny rok, musi byc wiekszy lub rowny 1971." << std::endl;

        return 1;
    }

    int num_years = year - 1971;
    int num_periods = num_years / 2;
    double num_transistors = 2250 * pow(2, num_periods);

    std::cout << "Liczba tranzystorow w procesorze wynosi: " << num_transistors;

    return 0;
}