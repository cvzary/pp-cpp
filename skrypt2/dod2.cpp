//Napisz program w języku C++, który pobierze ze standardowego wejścia liczbę całkowitą dodatnią x i 
//wyświetli wszystkie liczby całkowite z jednostronnie domkniętego zakresu [0, x).
//Zmodyfikuj program aby pobierał liczbę całkowitą (także ujemną) i wyświetlał wszystkie liczby całkowite
// z zakresu domkniętego [x, 0] lub [0, x].

#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if(x>=0) {
        std::cout << "Liczby calkowite z zakresu [0, " << x << "]: " << std::endl;
        for (int i = 0; i <= x; ++i) {
            std::cout << i << std::endl;
        } 
    }   else {
        std::cout << "liczby calkowite z zakresu [" << x << ",0]:" << std::endl;
        for (int i = x; i <= 0; ++i) {
            std::cout << i << std::endl;
        }
    }


    return 0;
}