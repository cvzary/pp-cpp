/*Napisz program w języku C++, który dla tablicy liczb całkowitych przesuwa o 1 w prawo wszystkie elementy tablicy 
(tak, żeby wartość elementu o indeksie 0 znalazła się w elemencie o indeksie 1, 
wartość elementu o indeksie 1 znalazła się w elemencie o indeksie 2, zaś wartość elementu o indeksie n-1 w elemencie o indeksie 0).*/

#include <iostream>

void print_arr(int arr[], unsigned int n) {
    for(unsigned int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void move_arr(int arr[], unsigned int n) {
    int tmp = arr[n-1];
    for(unsigned int i = n - 1; i > 0; i--) 
        arr[i] = arr[i-1];
        arr[0] = tmp;
}

int main() {
    int arr[] = {5,4,3,8,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_arr(arr,n);
    move_arr(arr,n);
    print_arr(arr,n);
    return 0;
}   