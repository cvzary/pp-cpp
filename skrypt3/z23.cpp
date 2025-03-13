//Napisz program w języku C++, który pobierze liczbę całkowitą dodatnią n oraz n liczb całkowitych. 
//Program powinien wyświetlić średnią arytmetyczną tych liczb.

#include <iostream>

int main() {
    unsigned int n;
    std::cin >> n;

    int value, sum = 0;

    for(unsigned int i = 0; i < n; i++) {
        std::cin >> value;
        sum += value;
    }

    double avg = static_cast<double>(sum) / n;
    std::cout << "srednia arytmetyczna to: " << avg << std::endl;

    return 0;
}