//Napisz program w języku C++, który wczytuje ze standardowego wejścia nieujemną liczbę n i wypisuje na standardowym wyjściu 
//wartość ⌊√n⌋ (wartość √n zaokrągloną w dół do najbliższej wartości całkowitoliczbowej). 
//Program napisz bez użycia funkcji z biblioteki matematycznej. Przybliżenie pierwiastka kwadratowego zrealizuj za pomocą metody Herona.

#include <iostream>
int main() {
    unsigned int n;
    std::cin >> n;
    
    float square = float(n), tmp = 1.f;
    while(square > tmp) {
        square = (square + tmp) / 2.f;
        tmp = n / square;
    }
    std::cout << int(square) << std::endl;
    return 0;
}