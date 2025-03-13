/*Napisz program w języku C++, który wczyta dwie całkowite wartości określające początek i koniec obustronnie domkniętego przedziału , 
a następnie wyświetli wszystkie liczby pierwsze w tym przedziale.*/

#include <iostream>

int main() {
    int a,b;
    bool isPrime;
    std::cin >> a >> b;
    if (a < 2) a = 2;
    for(int v = a; v <= b; ++v) {
        isPrime = true;
        for(int i = 2; i < v; ++i)
            if(!(v % i)) {
                isPrime = false;
                break;
            }
            if(isPrime) std::cout << v << std::endl;
    }
    return 0;
}