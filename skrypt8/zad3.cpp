/*Napisz funkcję w języku C++, która przyjmuje jako argument wskaźnik na początek i koniec tablicy liczb całkowitych. 
Funkcja powinna wyświetlić wszystkie elementy tej tablicy. Napisz program w języku C++, który przetestuje działanie tej funkcji.*/
#include <iostream>

void print_arr(int *begin, int *end) {
    for(int *i = begin; i <= end; ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
}

int main() {
    int arr[5] = {4, 2, 8, 1, 3};
    print_arr(arr, &arr[4]);
    return 0;
}