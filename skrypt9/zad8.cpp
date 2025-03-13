/*Napisz program w języku C++, który stworzy dwuwymiarową tablicę (NxM) w postaci tablicy wskaźników do tablicy wartości liczb całkowitych.
Napisz funkcję f1, która wypełni tą tablicę dowolnymi wartościami, a następnie funkcję f2, która wyświetli wartości z tej tablicy.*/

#include <iostream>

void f1(int **arr, int n, int m) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            arr[i][j] = i + j;
}

void f2(int **arr, int n, int m) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
}

int main() {
    int n,m;
    std::cin >> n >> m;
    int **arr = new int*[n];
    
    for(int i = 0; i < n; ++i)
        arr[i] = new int[m];

    f1(arr,n,m);
    f2(arr,n,m);

    for(int i = 0; i < n; ++i)
        delete[] arr[i];

    delete[] arr;
    
    return 0;
}
