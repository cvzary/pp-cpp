/*Napisz program w języku C++, który odwraca kolejność elementów w tablicy.*/

#include <iostream>

void reverse_arr(int arr[], unsigned int n) {
    int tmp;
    unsigned int s = 0, e = n - 1;
    while(s < e) {
        tmp = arr[s];
        arr[s++] = arr[e];
        arr[e--] = tmp;
    }
}
void print_arr(int arr[], unsigned int n) {
    for (unsigned int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
int main() {
    const unsigned int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    print_arr(arr, size);
    reverse_arr(arr, size);
    print_arr(arr, size);
    return 0;
}