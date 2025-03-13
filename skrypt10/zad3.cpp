/*Napisz program w języku C++, który zaalokuje 32 bajtową tablicę, wprowadzi do niej wartości całkowite,
a następnie wyświetli elementy tej tablicy jako zmienne typu int.*/

#include <iostream>
#include <climits>

int main() {
    char *arr = new char[32];
    int size = 32 / sizeof(int);

    for(int i = 0; i < size; ++i)
        *((int *)arr + i) = INT_MAX - i;

    for(int i = 0; i < size; ++i)
        std::cout << *((int *)arr + i) << " ";
    std::cout << std::endl;

    delete[] arr;
    return 0;

}