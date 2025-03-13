/*Napisz funkcję w języku C++, która przyjmuje jako argumenty automatyczną tablicę wartości całkowitych, jej rozmiar oraz referencję
do zmiennej logicznej. Funkcja powinna posortować tablicę w taki sposób, że wartości nieparzyste znajdą się w początkowej części
tablicy, a parzyste w końcowej. Kolejność wartości wewnątrz tych grup jest dowolna. Funkcja powinna zwrócić wskaźnik na komórkę
tablicy, w której pojawi się pierwsza liczba parzysta. Zmiennej przekazanej przez referencję podany w argumencie, należy przypisać 
prawdę, jeżeli funkcja dokonała w tablicy jakąkolwiek zmianę, a fałsz w przeciwnym przypadku. W zadaniu wykorzystaj wskaźnikowy 
sposób indeksowania tablicy. Dla ułatwienia załóżmy, że w tablicy jest co najmniej jedna wartość parzysta i nieparzysta.*/

#include <iostream>

void print_arr(int *begin, int *end) {
    for(int *i = begin; i < end; ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int *f(int arr[], int n, bool &changed) {
    int *even = nullptr;
    changed = false;
    int *left = arr;
    int *right = arr + n - 1;
    while(left < right) {

        while(left < right && *left % 2 == 1)
            ++left;

        while(left < right && *right % 2 == 0)
            --right;

        if(left < right) {
            swap(left,right);
            changed = true;
        }
    }

    even = arr;
    
    while(even < arr + n && *even % 2 == 1)
        ++even;

    return even;
}

int main() {
    bool c;
    int arr[7] = {1, 4, 3, 5, 2, 7, 8};
    int *even = f(arr,7,c);
    print_arr(arr, even);
    print_arr(even, arr + 7);
    print_arr(arr, arr + 7);
    return 0;
}
