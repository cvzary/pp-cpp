/*Napisz funkcję w języku C++, która przyjmie w argumencie liczbę zmiennoprzecinkową i zwróci jej wartość całkowitą i ułamkową.*/

#include <iostream>
#include <cmath>

void splitDouble(double value, double& intPart, double& fracPart) {
    fracPart = std::modf(value, &intPart);
}

int main() {
    double value, intPart, fracPart;
    std::cin >> value;

    splitDouble(value, intPart, fracPart);
    std::cout << "Value: " << value << std::endl;
    std::cout << "Integer part: "<< intPart << std::endl;
    std::cout << "Fractional part: " <<fracPart << std::endl;
    return 0;
}