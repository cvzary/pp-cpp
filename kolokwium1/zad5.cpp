/*Napisz program, który wczytuje od użytkownika liczbę całkowitą n (zakładamy, że n<20). Utwórz tablicę liczb zmiennoprzecinkowych arr, 
która będzie w stanie pomieścić n liczb, a następnie wczytaj do niej n wartości ze standardowego wejścia. Napisz funkcję, która przyjmuje 
taką tablicę w argumencie. Funkcja ma wyświetlić na standardowym wyjściu kolejne wyrazy ciągu od 1 do n zdefiniowanego wzorem:
F(0) = 0
F(n) = (-1)^n * arr_{n-1} + F_{n-1}
gdzie: ^ - operacja potęgowania

PRZYKŁAD:
IN n: 3
IN a: 0.4, 0.2, 1.4
OUT: -0.4, -0.2, -1.6*/

#include <iostream>
#include <cmath>

void f(float arr[], int n) {
    float F = 0;
    for(int i = 1; i <= n; ++i) {
        F = std::pow(-1, i) * arr[i-1] + F;
    std::cout << F;
    if(i != n) std::cout << ", ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    if(n >= 20) return 1;
    float arr[20] = {};
    for(int i = 0; i < n; ++i)
        std::cin >> arr[i];

    f(arr,n);

    return 0;
}



