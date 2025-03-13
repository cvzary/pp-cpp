/*Napisz funkcję w języku C++, która przyjmie jako argumenty dwuwymiarową automatyczną tablicę wartości całkowitych i
 zwraca największą wartość z tej tablicy. Napisz program w języku C++, który przetestuje działanie tej funkcji.*/
#include <iostream>

#define N 5
#define M 10

 int max_2d_array(int arr[][M], int n, int m) {
    int max = arr[0][0];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(arr[i][j] > max)
                max = arr[i][j];
    return max;
 }

 int main() {
    int arr[N][M];
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < M; ++j)
            arr[i][j] = i * j;
    std::cout << max_2d_array(arr,N,M) << std::endl;
    
    return 0;
 }