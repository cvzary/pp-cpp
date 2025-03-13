/*Napisz funkcję w języku C++, która przyjmie jako argumenty jednowymiarową tablicę liczb zmiennoprzecinkowych oraz jej rozmiar. 
Funkcja powinna zmodyfikować tablicę tak, aby komórki zawierające zero znalazły się na końcu tablicy.*/

#include <iostream>

void move_zeros_to_end(float arr[], int n) {
    int idx = 0;
    for(int i = 0; i < n; ++i)
        if(arr[i] != 0)
            arr[idx++] = arr[i];

    while(idx<n) 
        arr[idx++] = 0;
}

void print_arr(float arr[], int n) {
    for(int i = 0; i < n; ++i) 
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    float arr[] =  {0.f, 5.f, 3.f, 7.f, 6.f, 0.f, 0.f, 3.f, 1.f, 2.f, 6.f, 0.f, 4.f, 1.f, 2.f};
    unsigned int size = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr, size);
    move_zeros_to_end(arr, size);
    print_arr(arr, size);
    return 0;
}
