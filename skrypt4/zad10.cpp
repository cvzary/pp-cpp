/*Do poprzedniego programu dopisz funkcję, która posortuje stworzoną tablicę. Program powinien wyświetlać posortowaną tablicę.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
const int N = 10;

void bubble_sort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < n - i - 1; ++j) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_arr(int arr[], int n) {
    for(int i = 0; i < N; ++i) 
        std::cout << arr[i] << " ";
    }

int f(int max) {
    return rand() % (max + 1);
}

int main() {
    srand(time(0));
    int arr[N];

    for(int i = 0; i < N; ++i)
        arr[i] = f(100);

    print_arr(arr, N);
    std::cout << std::endl;
    bubble_sort(arr, N);

    print_arr(arr, N);

    return 0;
}