/*Napisz funkcję w języku C++, która przyjmie w argumencie liczbę zmiennoprzecinkową i „zwróci” jej wartość całkowitą i ułamkową.*/

#include <iostream>
#include <cmath>

void split_number(float number, float &fractionalPart, float &integerPart) {
    integerPart = std::floor(number);
    fractionalPart = number - integerPart;
}

int main() {
    float integer_part, fractional_part, number = 3.14;

    split_number(number,fractional_part,integer_part);
    std::cout << number << std::endl;
    std::cout << integer_part << std::endl;
    std::cout << fractional_part << std::endl;
    return 0;
}