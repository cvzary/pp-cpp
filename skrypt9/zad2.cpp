/*Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą n, a następnie dynamicznie zaalokuje pamięć dla n elementowej 
tablicy liczb całkowitych. Program powinien wypełnić tablicę dowolnymi wartościami, a następnie wyświetlić wszystkie elementy tej tablicy.*/

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; ++i)
        arr[i] = i * i;

    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;


    delete[] arr;
    return 0;
}