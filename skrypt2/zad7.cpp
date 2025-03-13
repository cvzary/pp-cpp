#include <iostream>
#include <cmath>

int main() {
    int a, b;
    double c;
    std::cin >> a >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Dlugosc przeciwprostokatnej dla przyprostokatnych o dlugosci: " << a << " i " << b << " wynosi : " << c;

    return 0;
}