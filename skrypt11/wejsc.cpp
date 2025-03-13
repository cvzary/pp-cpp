/*
Napisz program w języku C++, który stworzy dwuwymiarową tablicę (NxM) w postaci tablicy wskaźników do tablicy wartości liczb całkowitych.
Napisz funkcję f1, która wypełni tą tablicę dowolnymi wartościami.
*/

#include <iostream>

void f1(int **arr_2d, int n, int m) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            arr_2d[i][j] = i * j;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    int **arr = new int*[n];
    for(int i = 0; i < n; ++i)
        arr[i] = new int[m];
    f1(arr,n,m);
    for(int i = 0; i < n; ++i)
        delete[] arr[i];
    delete[] arr;
    return 0;
}