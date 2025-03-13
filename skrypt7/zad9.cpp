/*Napisz program w języku C++, który wykona dla dwóch dwuwymiarowych tablic liczb zmiennoprzecinkowych operację mnożenia macierzowego, 
wynik zapisz w trzeciej tablicy. */

#include <iostream>

const int n = 2, m = 3, p = 4;

int main() {
    float matrix_0[n][m] = {}, matrix_1[m][p] = {}, result[n][p] = {};

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            std::cin >> matrix_0[i][j];

    for(int i = 0; i < m; ++i)
        for(int j = 0; j < p; ++j)
            std::cin >> matrix_1[i][j];
    
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < p; ++j)
            for(int k = 0; k < m; ++k)
            result[i][j] += matrix_0[i][k] * matrix_1[k][j];
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < p; ++j)
            std::cout << result[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}