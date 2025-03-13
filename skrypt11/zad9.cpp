/*
Napisz funkcję w języku C++, która otrzymuje w argumencie jednowymiarową tablicę liczb zmiennoprzecinkowych, dwie liczby całkowite będące 
wymiarami obszaru reprezentowanego przez tablicę podaną w pierwszym argumencie. Funkcja powinna wypełnić krawędzie obszaru zerami, 
a następnie zwrócić dwuwymiarową tablicę z tak zmodyfikowanymi danymi. Napisz program w języku C++, który sprawdzi działanie tej funkcji.
*/

#include <iostream>

void f(float *arr, int n, int m, float **result) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(i == 0 || j == 0 || i == n - 1 || j == m - 1)
                result[i][j] = 0.f;
            else
                result[i][j] = arr[i * m + j];
}

void print_arr(float **arr, int n, int m) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
}

int main() {
    const int n = 3, m = 5;
    float arr[n * m] = {1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f};
    float **result = new float*[n];
    for(int i = 0; i < n; ++i) 
        result[i] = new float[m];
    f(arr, n, m, result);
    print_arr(result, n, m);
    for(int i = 0; i < n; ++i) 
        delete[] result[i];
    delete[] result;
    return 0;
}