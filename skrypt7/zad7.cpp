/*Napisz program w języku C++, w których utworzona i zapełniona danymi zostanie dwuwymiarowa tablica znaków o wymiarach 
n wierszy i m kolumn zawierająca wyłącznie małe litery. Napisz program, który wyświetli najwcześniejszą i najpóźniejszą alfabetycznie 
literę znajdującą się osobno w każdym z wierszy tablicy.
Następnie zmodyfikuj program tak, aby po zakończeniu działania dla wierszy wykonać analogiczne działanie dla kolumn.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

const int N = 5, M = 10;

char min(char str[], int n) {
    char min = str[0];
    for(int i = 1; i < n; ++i) 
        if(min > str[i]) min = str[i];
    return min;
}

char max(char str[], int n) {
    char max = str[0];
    for(int i = 1; i < n; ++i)
        if(max < str[i]) max = str[i];
    return max;
}

char rand_char() {
    int v = rand() % 52;
    if(v < 26) return 'A' + v;
    else return 'a' + (v - 26);
}

void fill_arr(char arr[][M], int n, int m) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            arr[i][j] = rand_char();
}

int main() {
    srand(time(0));
    char arr[N][M] = {}, min_value = 0, max_value = 0;
    fill_arr(arr,N,M);

    for(int i = 0; i < N; ++i) {
        min_value = min(arr[i],M), max_value = max(arr[i], M);
        std::cout << "Row " << i + 1 << ": " << min_value << " " << max_value << std::endl;
    }

    for (int j = 0; j < M; ++j) {
        min_value = max_value = arr[0][j];
        for (int i = 1; i < N; ++i) {
            if (arr[i][j] < min_value) min_value = arr[i][j];
            if (arr[i][j] > max_value) max_value = arr[i][j];
        }
        std::cout << "Column " << j + 1 << ": " << min_value << " " << max_value << std::endl;
    }

    return 0;
}