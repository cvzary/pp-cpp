//Wykorzystaj funkcję qsort do posortowania tablicy liczb całkowitych rosnąco pod względem liczebności cyfry 0 w liczbach.

#include <iostream>
#include <cstdlib>

int num_zeros(int value) {
    int result = 0;  // Licznik zer w liczbie
    do {
        if (!(value % 10)) // Sprawdzamy, czy ostatnia cyfra to zero
            ++result;      // Jeśli tak, zwiększamy licznik zer
    } while (value /= 10); // Usuwamy ostatnią cyfrę z liczby i kontynuujemy
    return result;         // Zwracamy liczbę zer
}

int cmp_num_zeros(const void *a, const void *b) {
    return num_zeros(*(int *)a) - num_zeros(*(int *)b);
}

void print_arr(int *arr, int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    const int n = 6;
    int arr[n] = {10, 1000, 1010, 100000, 101010, 100};
    print_arr(arr, n);
    qsort(arr,n,sizeof(arr[0]),cmp_num_zeros);
    print_arr(arr, n);
    return 0;
}