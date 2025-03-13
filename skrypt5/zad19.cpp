/*Napisz funkcję w języku C++, która przyjmie jako argumenty jednowymiarową tablicę liczb zmiennoprzecinkowych, jej rozmiar 
oraz dwie liczby całkowite określające zakres domkniętego przedziału. 
Funkcja powinna wyzerować komórki nie zawierające liczb z tego przedziału.*/
#include <iostream>

void zero_out_of_range(float arr[], unsigned int n, int min, int max) {
    for(int i = 0; i < n; ++i)
        if(arr[i] < min || arr[i] > max)
            arr[i] = 0;
}

void print_arr(float arr[], int n) {
    for(int i = 0; i < n; ++i) 
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    float arr[] = {1.5f, 2.6f, 1.1f, 3.7f, 4.8f, 5.9f}, min = 2.f, max = 5.f;
    int size = sizeof(arr) / sizeof(arr[0]);
    zero_out_of_range(arr, size, min, max);
    print_arr(arr, size);
    return 0;
}

