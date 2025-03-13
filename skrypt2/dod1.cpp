// Napisz program w języku C++, który pobierze ze standardowego wejścia liczbę całkowitą dodatnią x i wyświetli wszystkie
// liczby całkowite z jednostronnie domkniętego zakresu [0, x).

#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if(x<=0) {
        std::cout << "Prosze podac liczbe dodatnia" << std::endl;
        return 1;
    }
    std::cout << "Wszystkie liczby calkowite z zakresu [1, " << x << "):" << std::endl;
    for(int i = 0; i < x; ++i) {
        std::cout << i << std::endl;
    }  

return 0;
}