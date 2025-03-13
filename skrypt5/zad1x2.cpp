//Napisz funkcję w języku C++, która zwraca kwadrat liczby podanej w argumencie. Skorzystaj z dyrektywy preprocesora #define.

#include <iostream>

inline int square(float a, float b) {
    return a * b;
}

int main() {
    float a,b;
    std::cin >> a >> b;
    std::cout << square(a,b) << std::endl;

    return 0;
}