//Rok przestępny jest podzielny przez 4. Wyjątkiem od tej zasady są lata kończące się na 00, które nie są przestępne. 
//Z kolei wyjątkiem od tego wyjątku są lata podzielne przez 400, które są przestępne. 
//Napisz program, który przyjmie numer roku i wyświetli leap year, jeżeli to rok przestępny, a common year w przeciwnym wypadku.

#include <iostream>

int main() {
    int year;
    std::cin >> year;

    if((year % 400 == 0) || ((year % 4 == 0) && year % 100 != 0))
        std::cout << "leap year" << std::endl;
    else
        std::cout << "common year" << std::endl;

        return 0;
}

