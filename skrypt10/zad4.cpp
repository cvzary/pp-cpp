/*Napisz funkcję w języku C++, która przyjmuje jednowymiarową tablicę liczb zmiennoprzecinkowych. 
Funkcja powinna zwracać wyznacznik macierzy dla tej tablicy, intepretowanej jako macierzy 3x3. 
Napisz program w języku C++, który przetestuje działanie tej funkcji.*/

#include <iostream>

float det(float *matrix) {
    return matrix[0] * matrix[4] * matrix[8] +  
           matrix[1] * matrix[5] * matrix[6] +  
           matrix[2] * matrix[3] * matrix[7] - 
          (matrix[2] * matrix[4] * matrix[6] +  
           matrix[0] * matrix[5] * matrix[7] +  
           matrix[1] * matrix[3] * matrix[8]);
}


int main() {
    float arr[] = {5, 4, -7, 1, 3, -1, 2, 0, -3};
    std::cout << det(arr) << std::endl;
    return 0;
}