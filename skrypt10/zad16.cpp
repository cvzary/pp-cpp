/*
Napisz funkcję w języku C++, która dostaje jako argumenty dwuwymiarową tablicę tablic o elementach typu int oraz jej wymiary, 
i zmienia kolejność wierszy w tablicy w taki sposób, że wiersz pierwszy ma się znaleźć na miejscu drugiego, wiersz drugi ma się 
znaleźć na miejscu trzeciego itd., natomiast ostatni wiersz ma się znaleźć na miejscu pierwszego (przyjmujemy, że elementy w wierszu 
są umieszczone w pamięci obok siebie).
*/

#include <iostream>
void print_arr(int **arr, int n, int m) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
}
void change_order(int **arr, int n, int m) {
    for (int i = n - 1; i > 0; --i)
        std::swap(arr[i], arr[i - 1]);
}
int main() {
    int n = 4, m = 3;
    int **arr = new int*[n];
    for(int i = 0; i < n; ++i) {
        arr[i] = new int[m];
        for(int j = 0; j < m; ++j)
            arr[i][j] = i * j;
    }
    
    print_arr(arr, n, m);
    change_order(arr, n, m);
    print_arr(arr, n, m);
    
    for(int i = 0; i < n; ++i)
        delete[] arr[i];
    delete[] arr;
    return 0;
}