/*Napisz funkcję w języku C++, która przyjmuje następujące argumenty: wskaźnik na początek tablicy liczb całkowitych – begin, 
wskaźnik na koniec tablicy liczb całkowitych – end oraz referencję na zmienną typu logicznego. Funkcja powinna sprawdzić,
czy w tablicy znajduje się wartość 5 i za pomocą ostatniego argumentu zwrócić odpowiedź.
Napisz program w języku C++, który sprawdzi działanie tej funkcji.*/
#include <iostream>

void f(int *begin, int *end, bool &result) {
    result = false;
    for(int *i = begin; i < end; ++i)
        if(*i == 5) {
            result = true;
            return;
        }
}

int main() {
    bool c;
    int arr[7] = {1, 4, 3, 8, 5, 7, 9};
    f(arr, arr + 7, c);
    std::cout << c << std::endl;
    return 0;
}