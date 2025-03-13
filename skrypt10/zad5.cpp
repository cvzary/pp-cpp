/*Napisz funkcję w języku C++, która przyjmuje jednowymiarową tablicę liczb zmiennoprzecinkowych – matrix, liczbę całkowitą – n,
liczbę całkowitą – m i liczbę zmiennoprzecinkową – s. Funkcja powinna zapisać do matrix wynik mnożenia macierzy –
matrix, o wymiarach n na m, przez skalar s. Napisz program w języku C++, który przetestuje działanie tej funkcji.*/

#include <iostream>

void product_with_scalar(float *matrix, int n, int m, float s) {
    for(int i = 0; i < n * m; ++i) matrix[i] *= s;
}
void print_arr(float *matrix, int n, int m) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j)   //n,m   i,j  // n,m,o,   i,j,k,  //  n,m,o,p    i,j,k,l
            std::cout << matrix[i*m + j] << " "; //[i*m*o + j*o + k ] // [i*m*o*p + j*o*p + k*p + l]
        std::cout << "\n";
    }
}
int main() {
    float arr[] = {5, 4, -7, 1, 3, -1, 2, 0, -3};
    product_with_scalar(arr, 3, 3, 2.5f);
    print_arr(arr, 3, 3);
    return 0;
}