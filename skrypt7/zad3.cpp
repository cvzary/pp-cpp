/*Napisz program w języku C++, który wczytuje ze standardowego wejścia współczynniki układu dwóch równań liniowych z dwoma niewiadomymi 
i wypisuje na standardowym wyjściu rozwiązanie układu równań. W przypadku nieskończonej liczby lub 
braku rozwiązań program powinien wypisać na standardowym wyjściu odpowiednią informację.
Podpowiedź: zaimplementuj algorytm rozwiązywania układów równań metodą wyznaczników (inaczej nazywaną wzorami Cramera).*/

#include <iostream>
int main() {
    double a1, b1, c1, a2, b2, c2;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    double r = a1 * b2 - a2 * b1;
    double r_x = c1 * b2 - c2 * b1;
    double r_y = a1 * c2 - a2 * c1;
    if (r != 0) {
        double x = r_x / r;
        double y = r_y / r;
        std::cout << "x = " << x << ", y = " << y << std::endl;
    } else {
        if (r_x == 0 && r_y == 0) std::cout << "Nieskończona liczba rozwiązań.\n";
        else std::cout << "Brak rozwiązań.\n";
    }
    return 0;
}