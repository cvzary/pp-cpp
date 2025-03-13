/*
Napisz funkcję w języku C++, która przyjmuje w argumencie tablicę liczb całkowitych (wskaźnik na kwadratową macierz) oraz jej rozmiar N. 
Funkcja powinna wypełnić przekazaną w argumencie macierz tabliczką mnożenia. Macierz jest spójnym obszarem pamięci.
*/

#include <iostream>

void fill_matrix(int *matrix, int n) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            matrix[i * n + j] = (i + 1) * (j + 1); 
}

void print_matrix(int *matrix, int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j)
            std::cout << matrix[i * n + j] << " ";
    std::cout << std::endl;
    }
}

int main() {
    int n = 10;
    int *arr = new int[n * n];
    fill_matrix(arr,n);
    print_matrix(arr,n);
    delete[] arr;
    return 0;
}