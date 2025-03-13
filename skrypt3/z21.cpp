//Napisz program w języku C++, który pobierze ze standardowego wejścia liczbę całkowitą dodatnią x 
//i wyświetli wszystkie liczby całkowite z jednostronnie domkniętego zakresu [0, x).

#include <iostream>

int main() {
    unsigned int x;
    std::cin >> x;
    for(unsigned int i = 0; i <= x; ++i) {
        std::cout << i << " ";
    }

    return 0;
}