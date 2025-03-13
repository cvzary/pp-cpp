//Napisz program w języku C++, który stworzy 10-cio elementową tablicę liczb całkowitych i wypełni ją pseudolosowymi liczbami 
//z przedziału <0,100>. Na koniec program powinien wyświetlić elementy tej tablicy.

#include <iostream>
#include <cstdlib>
#include <ctime>
const int N = 10;

int f(int max) {
    return rand() % (max + 1);
}

int main() {
    srand(time(0));
    int arr[N];

    for(int i = 0; i < N; ++i)
        arr[i] = f(100);

    for(int i = 0; i < N; ++i) 
        std::cout << arr[i] << " ";
        
    return 0;
}