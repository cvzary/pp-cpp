/*
Napisz program, który obliczy i wyświetli długości dwuwymiarowych wektorów zapisanych w jednowymiarowej tablicy liczb zmiennoprzecinkowych.
Tablica z wektorami wejściowymi ma być skonstruowana w ten sposób, że kolejne współrzędne (x, y) 
każdego wektora zajmują kolejne elementy tablicy, czyli:  [x1,y1, x2,y2, x3,y3, …, xn,yn].
Zdefiniuj funkcję arr_fun, która w parametrach przyjmie: 
(1) wskaźnik na początek tablicy wektorów, 
(2) wskaźnik na za-ostatni element tej tablicy, 
(3) wskaźnik na początek tablicy wynikowej z obliczonymi długościami oraz 
(4) wskaźnik na funkcję pomocniczą, która zwraca wartość zmiennoprzecinkową a w parametrach bierze dwie wartości zmiennoprzecinkowe.
Zdefiniuj funkcję pomocniczą, która zwróci długość wektora przy podaniu przez parametry jego dwóch współrzędnych.
W funkcji głównej stwórz przykładową dynamiczną tablicę wektorów, wyznacz za pomocą stworzonej funkcji arr_fun ich długości i wyświetl 
powstałą w ten sposób tablicę wynikową. W zadaniu nie można używać funkcji z biblioteki <algorithm>.

Przykład:
IN:  [1.0,1.0  2.0,1.0  1.0,3.0  3.0,1.0]
OUT: [1.414214 2.236068 3.162278 3.162278]
*/

#include <iostream>
#include <cmath>

double vector_length(double x, double y) {
    return std::sqrt(x * x + y * y);    
}

void arr_fun(double *arr_start, double *arr_end, double *res_arr, double (*length_fun)(double, double)) {
    double *ptr = arr_start;
    int index = 0;

    while(ptr < arr_end) {
        double x = *ptr;
        double y = *(ptr + 1);
        res_arr[index] = vector_length(x,y);
        ptr += 2;
        ++index;
    }
}

int main() {
    int n = 4;
    double test_arr[] = {1.0, 1.0, 2.0, 1.0, 1.0, 3.0, 3.0, 1.0};
    double *arr = new double[2*n];
    for(int i = 0; i < 2*n; ++i)
        arr[i] = test_arr[i];
        
    double *results = new double[n];

    arr_fun(arr,arr + (2 * n), results, vector_length);

    for(int i = 0; i < n; ++i)
        std::cout << results[i] << " ";
    std::cout << std::endl;
    delete[] arr;
    delete[] results;
    return 0;
}