/*
Napisz funkcję w języku C++, która obliczy (zwróci) iloczyn diadyczny dwóch wektorów o dowolnej ilości współrzędnych. 
Wektory mają być reprezentowane za pomocą jednowymiarowych dynamicznie alokowanych tablic 
a macierz przez dynamicznie alokowaną tablicę dwuwymiarową.
*/

#include <iostream>
void calculate_dyadic_product(int *vector1, int *vector2, int n, int **result) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            result[i][j] = vector1[i] * vector2[j];
}
void print_matrix(int** matrix, int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
}
int main() {
    int n = 3;
    int *vec_0 = new int[n]{1, 2, 3}, *vec_1 = new int[n]{4, 5, 6};
    int **result = new int*[n];
    for(int i = 0; i < n; ++i) result[i] = new int[n]();
    calculate_dyadic_product(vec_0, vec_1, n, result);
    print_matrix(result, n);
    for (int i = 0; i < n; ++i) delete[] result[i];
    delete[] result;
    delete[] vec_0;
    delete[] vec_1;
    return 0;
}