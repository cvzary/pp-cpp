/*Napisz funkcję w języku C++, która przyjmuje w argumencie liczbę całkowitą bez znaku. 
Funkcja powinna obliczyć wartość silni dla argumentu i zwrócić wynik. 
Napisz program w języku C++, który sprawdzi działanie tej funkcji.*/
#include <iostream>

int factorial(unsigned int n) {
    unsigned int result = 1;
    for(unsigned int i = 1; i <= n; ++i) {
        result = result * i;
    }
    return result;
}

int main() {
    unsigned int n;
    std::cin >> n;
    std::cout << factorial(n) << std::endl;


    return 0;
}