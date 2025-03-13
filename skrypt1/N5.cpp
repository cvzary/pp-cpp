#include <iostream>
#include <cmath>

int main() {

    double a, b, c, delta;

    std::cout << "Podaj wspolczynniki a, b, c rownania kwadratowego:  ";
    std::cin >> a >> b >> c;

    if(a == 0) {
        std::cout << "To nie jest rownanie kwadratowe";
        return 1;
    }

    delta = b * b - 4 * a * c;

    if(delta > 0) {
        double x1 = (-b -sqrt(delta)) / (2 * a);
        double x2 = (-b +sqrt(delta)) / (2 * a);
        std::cout << "Rozwiazania tego rownania to: " << x1 << " i " << x2 << std::endl;
    } else if(delta==0) {
        double x = -b / (2 * a);
        std::cout << "Rownanie ma jedno rozwiazanie, x = " << x << std::endl;
    }   else {
        std::cout << "Brak rozwiazan w zbiorze liczb rzeczywistych" << std::endl;
    }

    return 0;


}