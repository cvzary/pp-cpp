/*
Napisz program w języku C++, który wczytuje ze standardowego wejścia trzy liczby naturalne n, m i o, a 
następnie alokuje pamięć dla trzywymiarowej tablicy n x m x o. Wypełnij tę tablicę dowolnymi wartościami a następnie usuń z pamięci.
*/

#include <iostream>

int main() {
    int n,m,o;
    int ***arr = nullptr;
    std::cin >> n >> m >> o;

    arr = new int**[n];
    for(int i = 0; i < n; ++i) {
        arr[i] = new int*[m];
            for(int j = 0; j < m; ++j)
                arr[i][j] = new int[o];
    }

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j) 
            for(int k = 0; k < o; ++k)
                arr[i][j][k] = i * j + k;

     for (int i = 0; i < n; ++i) {
        std::cout << "Płaszczyzna " << i << ":" << std::endl;
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < o; ++k) {
                std::cout << arr[i][j][k] << " ";
            }
            std::cout << std::endl; // Przejście do nowej linii po każdym wierszu
        }
        std::cout << std::endl; // Oddzielenie kolejnych płaszczyzn
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j)
            delete[] arr[i][j];
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}

