/*Napisz program w języku C++, który utworzy n-elementową tablicę liczb całkowitych i zapełni ją danymi. 
Program powinien zmodyfikować zawartość tablicy tak, aby liczby parzyste znalazły się w początkowej, 
a liczby nieparzyste w końcowej części tablicy. Kolejność liczb w ramach grupy parzystych i nieparzystych jest dowolna.*/

#include <iostream>

void my_swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void rearrange_arr(int arr[], unsigned int n) {
    unsigned int even_idx = 0, odd_idx = n - 1;

    while(even_idx < odd_idx) {
        while(!(arr[even_idx] % 2) && even_idx < odd_idx) even_idx++;
        while(arr[odd_idx] % 2 && even_idx < odd_idx) odd_idx--;
        if(even_idx < odd_idx) my_swap(arr[even_idx], arr[odd_idx]);
    }
}

void print_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    const unsigned int n = 10;
    int arr[n] = {1, 5, 2, 5, 4, 6, 7, 0, 10, 9};

    rearrange_arr(arr, n);
    print_arr(arr,n);

    return 0;
}