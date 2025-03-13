/*
Napisz program, który przyjmie od użytkownika liczbę całkowitą n. Utwórz dynamiczną tablicę liczb całkowitych arr i wypełnij ją wartościami
od użytkownika większymi od 0. Liczby te reprezentują liczbę elementów dla kolejnych wierszy nieregularnej tablicy dwuwymiarowej arr2d.
Następnie utwórz dynamiczną n-elementową tablicę wskaźników na tablice liczb zmiennoprzecinkowych arr2d. 
Każdemu wskaźnikowi zarezerwuj pamięć zgodnie z korespondującą indeksowo wartością tablicy arr. Wypełnij wszystkie tablice
liczbami zmiennoprzecinkowymi pobranymi od użytkownika. Utwórz dynamiczną n-elementową tablicę liczb zmiennoprzecinkowych result,
której elementami są sumy elementów poszczególnych wierszy tablicy arr2d, a następnie wyświetl jej zawartość.

Przykład:

IN:

    n:       4
    arr:     [3 5 4 1]
    arr2d:   [1.3 2.5 7.1]
                 [1.1 3.4 2.2 4.7 1.9]
                 [0.4 2.1 7.1 3.9]
                 [3.5]

OUT: 

result:  [10.9 13.3 13.5 3.5]       */

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; ++i)
        std::cin >> arr[i];

    double **arr2d = new double*[n];
    double *result = new double[n];

    for(int i = 0; i < n; ++i) {
        arr2d[i] = new double[arr[i]];

        for(int j = 0; j < arr[i]; ++j)
            std::cin >> arr2d[i][j];
    
        result[i] = 0.0;
        for(int j = 0; j < arr[i]; ++j)
            result[i] += arr2d[i][j];
    
    }

    for(int i = 0; i < n; ++i)
        std::cout << result[i] << " ";
    std::cout << std::endl;

    for(int i = 0; i < n; ++i)
        delete[] arr2d[i];
    delete[] result;
    delete[] arr2d;
    delete[] arr;

    return 0;
}