/*
Wykorzystując wskaźniki na funkcje napisz program w języku C++, który w zależności od wywołania funkcji f znajdzie
w tablicy liczb całkowitych wartość minimalną lub maksymalną.
*/

#include <iostream>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int f(int arr[], int n, int (*fun)(int, int)) {
    int ex = arr[0];
    for(int i = 1; i < n; ++i)
        ex = fun(ex, arr[i]);
    return ex;
}

int main() {
    int arr[] = {1, 2, 3, 5, 15, 0, 12, 13, 5, 7};
    std::cout << f(arr, 10, min) << std::endl;
    std::cout << f(arr, 10, max) << std::endl;
    return 0;
}

// int f(int arr[], int n, int (*fun)(int,int))
//można zamienić na:
//typedef int (*p_fun)(int, int);
//int f(int arr[], int n, p_fun fun)