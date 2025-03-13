#include <iostream>
#include <cmath>

int main() {

    double number;
    std::cin >> number;
    std::cout << "Wartosc bezwzgledna podanej liczby to: " << fabs(number) << std::endl;

    return 0;
}