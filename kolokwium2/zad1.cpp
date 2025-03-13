/*
Dane są dwie tablice liczb zmiennoprzecinkowych o długościach: (1) 3*N oraz (2) N, gdzie N jest liczbą naturalną. 
Zdefiniuj funkcję fun_arr, która w parametrze przyjmie dwie tablice (o podanej wyżej specyfikacji) 
oraz wskaźnik na pewną dodatkową funkcję fun_aux. Funkcja fun_arr z każdych trzech sąsiadujących elementów 
(o indeksach {3i, 3i+1, 3i+2}) z pierwszej tablicy ma obliczyć, za pomocą fun_aux, pojedynczą wartość i wstawić ją do drugiej 
tablicy w element o indeksie i. Funkcja pomocnicza fun_aux, dla trzech podanych liczb, ma zwracać wartość największą.
W funkcji głównej stwórz przykładowe dynamiczne tablice (1) i (2) spełniające warunki z początku zadania i wykorzystując 
funkcje fun_arr i fun_aux, uzupełnij tablicę wyjściową (2). Wypisz na ekranie jej wartości. 
Zadbaj o właściwe zarządzanie pamięcią dynamiczną.

Przykład:

IN:     [1.0,1.0,2.5,   2.0,1.0,-0.5,   -1.5,-3.0,-4.0,   0.0,0.0,0.0,0.0]
OUT: [2.5            2.0             -1.5              0.0]

*/

#include <iostream>

float fun_aux(float a, float b, float c) {
    if(a > b && a > c) return a;
    else if(b > c && b > a) return b;
    else return c;
}

void fun_arr(float *arr1, float *arr2, int n,float (*fun)(float, float, float)) {
    for(int i = 0; i < n; ++i)
        arr2[i] = fun_aux(arr1[3*i], arr1[3 * i + 1], arr1[3 * i + 2]);
}


int main() {
    int n = 4;
    float *arr1 = new float[3 * n];
    float *arr2 = new float[n];
    for(int i = 0; i < 3* n; ++i)
        std::cin >> arr1[i];

    fun_arr(arr1,arr2,n,fun_aux);

    for(int i = 0; i < n; ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    delete[] arr2;
    delete[] arr1;
    return 0;
}