/*
Napisz program w języku C++, który utworzy dwie tablice liczb całkowitych n- i m- elementową. Rozmiary n i m zdefiniuj w kodzie 
z użyciem stałych. Zapełnij te tablice pseudolosowymi liczbami całkowitymi z przedziału obustronnie domkniętego <a;b>, 
który wczytasz od użytkownika w formacie " <a;b>". Następnie utwórz tablicę o rozmiarze n + m, i napisz funkcję, która zapisze w jej 
n początkowych komórkach zawartość tablicy n-elementowej, a w pozostałych zawartość tablicy m-elementowej. 
Następnie napisz funkcję, która zmodyfikuje zawartość tablicy o rozmiarze n + m tak, aby liczby parzyste znalazły się w początkowej,
a liczby nieparzyste w końcowej części tablicy. Kolejność liczb w ramach grupy parzystych i nieparzystych jest dowolna. 
Na koniec wyświetl wszystkie tablice w celu porównania wyników. Do rozwiązania zadania możesz użyć dowolnej liczby funkcji pomocniczych.
Dodatkowo można założyć, że wartości a i b są mniejsze niż RAND_MAX.
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

const int n = 5, m = 10;

void print_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void fill_arr(int arr[], int n, int a, int b) {
    for(int i = 0; i < n; ++i)
        arr[i] = a + rand() % (b - a + 1);
}

void merge_arr(int arr1[], int n, int arr2[], int m, int merged_arr[]) {
    for(int i = 0; i < n; ++i)
        merged_arr[i] = arr1[i];
    for(int i = 0; i < m; ++i)
        merged_arr[n + i] = arr2[i];
}

void separateEvenOdd(int arr[], int size) {
    int temp[size];
    int evenIndex = 0;
    int oddIndex = size - 1;

    for(int i = 0; i < size; ++i) {
        if(arr[i] % 2 == 0)
            temp[evenIndex++] = arr[i];
        else
            temp[oddIndex--] = arr[i];
    }
    
    for(int i = 0; i < size; ++i)
        arr[i] = temp[i];
}

int main() {
    std::srand(time(0));
    int arr[n], arr1[m], merged_array[n+m], a, b;
    
    if(scanf("<%d;%d>", &a, &b) != 2) {
        std::cerr << "niepoprawny format danych!" << std::endl;
            return 1;
    }

    if(a > b) {
        std::cerr << "a musi byc mniejsze od b!" << std::endl; 
            return 1;
    }

    fill_arr(arr,n,a,b);
    fill_arr(arr1,m,a,b);
    merge_arr(arr,n,arr1,m,merged_array);
    print_arr(arr,n);
    print_arr(arr1,m);
    print_arr(merged_array,n+m);
    separateEvenOdd(merged_array,n+m);
    print_arr(merged_array,n+m);

    return 0;
}