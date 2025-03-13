/*W analogiczny sposób jak w poprzednim zadaniu utwórz tablicę reprezentującą macierz górnotrójkątną. 
Liczba n powinna odpowiadać liczbie wierszy, a w przypadku pierwszego wiersza, także kolumn.
Każdy kolejny wiersz powinien mieć o jeden element mniej niż poprzedni. Napisz dwie funkcje w języku C++,
które przyjmą jako parametr wskaźnik na tę tablicę oraz rozmiar n. 
Jedna z funkcji powinna zapisać w tablicy niepowtarzającą się część tabliczki mnożenia. 
Druga funkcja powinna wyświetlić tabliczkę mnożenia z tablicy, tworząc jednak pełny kwadrat. 
Do indeksowania tablic używaj operacji dereferencji i arytmetyki wskaźników. 
Pamiętaj o zwolnieniu pamięci zajmowanej przez tablice.*/

#include <iostream>

void fill_matrix(int **arr_2d, int n) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n - i; ++j)
            *(*(arr_2d + i) + j) = (i + 1) * (j + 1);
}

void print_matrix(int **arr_2d, int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - i; ++j)
            std::cout << *(*(arr_2d + i) + j) << " ";
        for(int j = 0; j < i; ++j)
            std::cout << "0 ";
        std::cout << std::endl;
    }
}
int main() {
    int n = 5, m = 10;
    int **arr_2d = new int*[n];
    for(int i = 0; i < n; ++i)
        *(arr_2d + i) = new int[n - i];
        
    fill_matrix(arr_2d, n);
    print_matrix(arr_2d, n);
            
    for(int i = 0; i < n; ++i)
        delete[] arr_2d[i];
    delete[] arr_2d;
    return 0;
}