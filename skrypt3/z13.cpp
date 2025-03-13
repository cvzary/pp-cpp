//Napisz program w języku C++, który będzie pobierał ze standardowego wejścia liczby zmiennoprzecinkowe i sumował je, 
//aż do momentu przekroczenia przez sumę liczby 100 lub podania liczby 0. 
//Program powinien wówczas wyświetlić o ile suma przekroczyła liczbę 100 i zakończyć działanie.

#include <iostream>

int main() {
    double value, sum = 0;

    while(sum <= 100) {
        std::cin >> value;
        if(value == 0) {
            break;
        }
        sum += value;
    }

    if(sum > 100) {
        std::cout << "Suma przekroczyla 100 o " << sum - 100 << std::endl;
    }   else {
        std::cout << "suma nie przekroczyla 100" << std::endl;
    }

    return 0;
}