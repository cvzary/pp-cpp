//Napisz program w języku C++, który pobierze ze standardowego wejścia dwie liczby zmiennoprzecinkowe.
//Program powinien wyświetlić ich iloraz, jeżeli druga liczba jest zerem, należy wyświetlić stosowną informację.

#include <iostream>

int main() {
    float a,b;
    std::cin >> a >> b;
    if(b!=0) {
        std::cout << a * b << std::endl;
    }   else {                                                  //   if(b) std::cout << a / b << std::endl;
                                                                // else std::cout << "Dzielenie przez 0.\n";
        std::cout << "DZIELENIE PRZEZ ZERO" << std::endl;
    }

    return 0;
}