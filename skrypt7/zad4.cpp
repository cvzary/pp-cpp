/*Napisz program w języku C++, który dla tablicy liczb całkowitych wypisze z niej wartość 
najbliższą średniej arytmetycznej wszystkich wartości z tej tablicy.*/

#include <iostream>
#include <cmath>

int main() {
    const int n = 5;
    int arr[n] = {1,2,4,5,6};
    float avg, sum = 0;
    for(int i = 0; i < n; ++i) sum += arr[i];
    avg = sum / n;

    int min = arr[0];
    for(int i = 1; i < n; ++i) 
        if(std::abs(arr[i] - avg) < std::abs(min - avg)) min = arr[i];

    std::cout << min << std::endl;

    return 0;
}