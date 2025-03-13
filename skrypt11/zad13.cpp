/*
Zmodyfikuj poprzednie rozwiązanie tak, aby wykorzystało funkcję std::sort. Użyj jej zamiast qsort.
*/

#include <iostream>
#include <algorithm>

int num_zeros(int value) {
    int result = 0;
    do if(!(value % 10)) ++result; while(value /= 10);
    return result;
}

bool cmp_num_zeros(int &a, int &b) {
    return num_zeros(a) < num_zeros(b);
}

void print_arr(int *arr, int n) {
    for(int i = 0; i < n; ++i) 
        std::cout << arr[i] << " "; 
    std::cout << "\n";
}

int main() {
    const int n = 6;
    int arr[n] = {10, 1000, 1010, 100000, 101010, 100};
    print_arr(arr, n);
    std::sort(arr, arr + n, cmp_num_zeros);
    print_arr(arr, n);
    return 0;
}