//Napisz program w języku C++, który pobierze ze standardowego wejścia trzy liczby całkowite: a, b, c.
//Program powinien wyświetlić informację, czy liczba b, jest większa od a, ale mniejsza od c.

#include <iostream>

int main() {

    int a,b,c;
    std::cin >> a >> b >> c;
    std::cout << (b > a && b < c ? "Tak" : "Nie") << std::endl;

    return 0;
}
