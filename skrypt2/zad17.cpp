//Napisz program w języku C++, który pobierze ze standardowego wejścia rok i liczbę tranzystorów w procesorze. 
//Program powinien wyświetlić, jaka jest różnica między liczbą tranzystorów w procesorze, a wynikającą z prawa Moore’a w roku jego produkcji.
// Wynik należy podać jako liczbę tranzystorów oraz procent liczby tranzystorów rzeczywistego procesora, zaokrąglony do dwóch liczb po przecinku.

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int year;
    double num_transistors;
    std::cout << "podaj rok" << std::endl;
    std::cin >> year;
    std::cout << "podaj liczbe tranzystorow" << std::endl;
    std::cin >> num_transistors;

        if(year < 1971) {
            std::cout << "Rok nie moze byc mniejszy niz 1971!";

            return 1;
        }   else {
            int num_years = year - 1971;
            int num_periods = num_years / 2;
            double num_transistors_moore = 2250 * pow(2, num_periods);

            double difference = num_transistors - num_transistors_moore;
            double percentage = difference / num_transistors_moore * 100;
            

            std::cout << " wynikajaca z prawa moore liczba tranzystorow wynosi: " << num_transistors_moore << std::endl;
            std::cout << "Roznica wynosi: " << difference << " tranzystorow, co stanowi "; 
            std::cout << std::setprecision(2) << std::fixed << percentage << "% liczby tranzystorow rzeczywistego procesora" << std::endl;

            

            }

            return 0;
}