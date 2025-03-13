//Napisz program w języku C++, który będzie pobierał ze standardowego wejścia liczby zmiennoprzecinkowe i sumował je, 
//aż do momentu podania liczby 0. Wówczas program powinien wyświetlić sumę liczb.

#include <iostream>

int main() {
    float value, sum = 0;
    do {
        std::cin >> value;
        sum += value;
    }
    while(value);

    std::cout << sum;

    return 0;
}

