//Napisz program i funkcje w języku C++, która przyjmuje jako argument automatyczną tablicę wartości całkowitych oraz jej rozmiar. 
//Funkcja powinna wypełnić tablicę wartościami pseudolosowymi z przedziału <20;40>.

#include <iostream>
#include <cstdlib>
#include <ctime>

const int MIN = 20;
const int MAX = 40;

void f(int arr[], int n) {
    for(int i = 0; i < n; ++i)
        arr[i] = rand() % (MAX - MIN + 1) + MIN;
}

int main() {
    srand(time(0));
    const int n = 10;
    
    int arr[n];
    
    f(arr, n);
    
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    
    std::cout << std::endl;

    return 0;
}