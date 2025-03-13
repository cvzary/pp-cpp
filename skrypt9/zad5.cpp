/*Napisz program w języku C++, który wczytuje od użytkownika liczbę całkowitą n, następnie dynamicznie alokuje pamięć dla n-elementowej 
tablicy liczb zmiennoprzecinkowych. Napisz funkcję f1, która uzupełni tą tablicę dowolnymi wartościami oraz funkcję f2, która przyjmuje 
rozmiar tablicy oraz tablicę liczb zmiennoprzecinkowych. Funkcja f2 ma wyświetlić na standardowym wyjściu kolejne wyrazy ciągu od 1 do n 
zdefiniowanego wzorem:

F0 = 0
Fn = (-1)^n * arr[n-1]+Fn-1,    n > 0*/

#include <iostream>
#include <cmath>


void f1(float *arr, int n) {
    for(int i = 0; i < n; ++i)
        arr[i] = i + 1;
}

void f2(float *arr, int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    float *arr = new float[n];

    f1(arr,n);
    f2(arr,n);

    delete[] arr;
    return 0;
}