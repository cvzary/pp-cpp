//Napisz program w języku C++, który pobierze liczbę całkowitą dodatnią n oraz n liczb całkowitych. 
//Program powinien wyświetlić największą spośród tych liczb.

#include <iostream>
#include <climits>

int main() {
    unsigned int n;
    std::cin >> n;

    int value, max = INT_MIN;

    for(int i = 0; i < n; ++i) {
        std::cin >> value;
        if(value > max) max = value;
    }

    std::cout << "Najwieksza liczba to: " << max << std::endl;

    return 0;
}