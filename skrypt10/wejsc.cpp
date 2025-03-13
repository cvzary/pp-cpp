/*Napisz program w języku C++, który stworzy 10-cio elementową tablicę liczb całkowitych i wypełni ją dowolnymi wartościami. 
Użyj dynamicznej alokacji pamięci.*/

#include <iostream>

int main() {
    int *arr = new int[10];
    for(int i = 0; i < 10; ++i) {
        arr[i] = i * i;
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}