/*Rozmiar pamięci zaalokowanej za pomocą funkcji malloc można zmienić funkcją realloc. 
Dla pamięci zaalokowanej operatorem new nie ma odpowiednika funkcji realloc. Napisz funkcję w języku C++, 
która spełni takie zadanie dla tablicy typu int. Funkcja powinna przyjąć jako parametry: wskaźnik na dynamicznie zaalokowaną 
tablicę oraz dwie liczby całkowite s i n określające stary i nowy rozmiar tablicy. Funkcja powinna dynamicznie utworzyć nową tablicę.
Jeżeli s > n, do nowej tablicy należy przepisać n początkowych komórek starej tablicy. Jeżeli n > s, należy przepisać wszystkie komórki,
a w pozostałych komórkach nowej tablicy pozostawić przypadkowe wartości. Funkcja powinna skasować starą tablicę oraz zwrócić 
wskaźnik na nową tablicę.*/

#include <iostream>

void resize_arr(int *&ptr, int s, int n) {
    int *new_ptr = new int[n];
    for(int i = 0; i < std::min(s,n); ++i)
        new_ptr[i] = ptr[i];
    delete[] ptr;
    ptr = new_ptr;
}

void print_arr_address(int *arr) {
    std::cout << static_cast<void*>(arr) << std::endl;
}

void print_arr(int *begin, int *end) {
    for(;begin <= end; ++begin)
        std::cout << *begin << " ";
}

int main() {
    const int n = 5, k = 10;
    int *arr = new int[n];
    for(int i = 0; i < n; ++i)
        arr[i] = i + 1; 
    print_arr_address(arr);
    resize_arr(arr, n, k);
    print_arr_address(arr);
    print_arr(arr, arr + k - 1);
    delete[] arr;
    arr = nullptr;
    return 0;
}

