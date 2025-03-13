/*Napisz funkcję w języku C++, która przyjmuje w argumentach: tablicę liczb zmiennoprzecinkowych arr1, rozmiar tablicy arr1,
tablicę liczb całkowitych arr2 oraz rozmiar tablicy arr2. Wartości elementów w tablicy arr2 to indeksy dla tablicy arr1.
Niech funkcja wyświetli wszystkie elementy tablicy arr1 o indeksach, których wartości znajdują się w tablicy arr2. Jeżeli w arr1 nie ma
odpowiedniego indeksu to wyświetla dla niego wartość NAN. Napisz program w języku C++, który dynamicznie zaalokuje pamięć dla obu tablic,
a następnie arr1 wypełni dowolnymi wartościami, zaś wartości tablicy arr2 wczyta od użytkownika.*/

#include <iostream>
#include <cmath>
void f1(float *arr, int n) {
    for(int i = 0; i < n; i++)
        arr[i] = i + 0.1f;
}
void f(float *values, int n_v, int *ids, int n_i) {
    for(int i = 0; i < n_i; ++i)
        std::cout << (ids[i] >= 0 && ids[i] < n_v ? values[ids[i]] : NAN) << std::endl;
}
int main() {
    int n, m;
    std::cin >> n >> m;
    float *values = new float[n];
    int *ids = new int[m];
    f1(values,n);
    for(int i = 0; i < m; ++i)
        std::cin >> ids[i];
    f(values, n, ids, m);
    delete[] values;
    delete[] ids;
    return 0;
}