/*
Napisz program, który przyjmuje od użytkownika dwie liczby całkowite n i m. Utwórz dynamiczną tablicę dwuwymiarową liczb całkowitych
nieujemnych arr2d o rozmiarze nx2m i wypełnij ją losowymi wartościami z przedziału <0,10). Następnie utwórz drugą dynamiczną tablicę 
dwuwymiarową liczb zmiennoprzecinkowych arr2d_2 o n wierszach. Korzystając z kolejnych elementów tablicy arr2d wypełnij kolejne wiersze 
tablicy arr2d_2 w następujący sposób: kolejne dwa elementy z każdego wiersza scal w liczbę zmiennoprzecinkową, w której mniejsza z tych
dwóch liczb będzie częścią całkowitą, a większa - częścią ułamkową. Następnie wyświetl zawartość tablicy arr2d_2.

Przykład:
IN:
    n: 3
    m: 4
    arr2d:      [3 5 2 3 5 0 3 3]
                [0 4 1 2 0 1 9 1]
                [3 1 6 0 1 2 2 9]

OUT:
    arr2d_2:    [3.5 2.3 0.5 3.3]
                [0.4 1.2 0.1 1.9]
                [3.1 0.6 1.2 2.9]     */

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));
    int n, m;
    std::cin >> n >> m;
    unsigned int **arr2d = new unsigned int*[n];
    
    for(int i = 0; i < n; ++i)
        arr2d[i] = new unsigned int[2*m];
    
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < 2*m; ++j)
            arr2d[i][j] = rand() % 10;

    double **arr2d_2 = new double*[n];
        for(int i = 0; i < n; ++i)
            arr2d_2[i] = new double[m];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j) {
            unsigned int a = arr2d[i][2 * j];
            unsigned int b = arr2d[i][2 * j + 1];
            if(a > b) std::swap(a,b);
            arr2d_2[i][j] = (a + b / 10.0);
        }   

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            std::cout << arr2d_2[i][j] << " ";
    std::cout << std::endl;

    for(int i = 0; i < n; ++i) {
        delete[] arr2d[i];
        delete[] arr2d_2[i];
}

    delete[] arr2d;
    delete[] arr2d_2;       
    


    return 0;
}

