//Napisz program w języku C++, który pobierze trzy zmiennoprzecinkowe współczynniki równania kwadratowego i 
//wyświetli rozwiązanie(a) lub informację o braku rozwiązań.

#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cin >> a >> b >> c;

    double delta = pow(b, 2) - 4 * a * c;
    if(delta > 0) {
        std::cout << "Dwa rozwiaznia, x1 = " << (-b - sqrt(delta)) / (2 * a) << " x2 = " << (-b + sqrt(delta) / (2 * a)) << std::endl;
    }
        else if(delta == 0) {
        std::cout << "jedno rozwiazanie x0 = " << -b/(2*a) << std::endl;
    }   else {
        std::cout << "brak rozwiazan" << std::endl;
    }


    return 0;
}