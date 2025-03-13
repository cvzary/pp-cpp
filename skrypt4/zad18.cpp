/*Napisz program w języku C++, który utworzy dwie tablice liczb całkowitych n- i m-elementową. 
Rozmiary n i m zdefiniuj w kodzie z użyciem stałych. Zapełnij te tablice danymi (w dowolny sposób, 
np. wprowadzonymi ze standardowego wejścia, kolejnymi lub pseudolosowymi liczbami). 
Następnie utwórz tablicę o rozmiarze n + m i zapisz w jej n początkowych komórkach zawartość tablicy n-elementowej,
 a w pozostałych zawartość tablicy m-elementowej.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

const int n = 5;
const int m = 3;

void fill_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i) arr[i] = rand() % 10;
}

void print_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void merge_arrs(int arr_n[], int n, int arr_m[], int m, int arr_nm[]) {
    for(int i = 0; i < n; ++i) arr_nm[i] = arr_n[i];
    for(int i = 0; i < m; ++i) arr_nm[n+i] = arr_m[i]; 
}

int main() {
    srand(time(0));
    int arr_n[n], arr_m[m], arr_nm[n+m];
    fill_arr(arr_n, n);
    print_arr(arr_n,n);
    fill_arr(arr_m, m);
    print_arr(arr_m, m);
    
    std::cout << "tablice po zlaczeniu: " << std::endl;
    merge_arrs(arr_n,n,arr_m,m,arr_nm);
    print_arr(arr_nm, n + m);

}