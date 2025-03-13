/*Napisz funkcję w języku C++, która przyjmie jako argument dwuwymiarową tablicę liczb zmiennoprzecinkowych oraz jej wymiary. 
Funkcja powinna tak zmodyfikować tą tablicę, aby w każdym polu znalazła się średnia arytmetyczna wartości w nim samym oraz polach sąsiednich
:górnym, dolnym, lewym i prawym. Jeżeli pole znajduje się na krawędzi tablicy, należy policzyć średnią z mniejszej liczby sąsiadów.
 Napisz program, który przetestuje działanie tej funkcji, wypełniając tablicę losowymi wartościami. */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

const int N = 10;
const int M = 10;

 void fill_arr(float arr[][M], int n, int m) {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            arr[i][j] = rand() % 100;
 }

void avg(float arr[][M], float tmp[][M], int n, int m) {
    int count;  // Liczba sąsiadów, które będziemy brać pod uwagę przy obliczaniu średniej
    float sum;  // Zmienna do sumowania wartości

    // Przechodzimy po każdym elemencie tablicy
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {

            sum = arr[i][j];  // Rozpoczynamy sumowanie od wartości samego elementu
            count = 1;  // Ustawiamy liczbę sąsiadów na 1, bo zawsze bierze się pod uwagę dany element

            // Sprawdzamy sąsiadów i dodajemy ich wartość do sumy oraz zwiększamy licznik sąsiadów (count)
            if(i > 0) {       // Sprawdzamy, czy istnieje element powyżej (czyli i > 0)
                sum += arr[i - 1][j];  // Dodajemy górnego sąsiada
                count++;  // Zwiększamy licznik sąsiadów
            }
            if(i < n - 1) {   // Sprawdzamy, czy istnieje element poniżej (czyli i < n - 1)
                sum += arr[i + 1][j];  // Dodajemy dolnego sąsiada
                count++;  // Zwiększamy licznik sąsiadów
            }
            if(j > 0) {       // Sprawdzamy, czy istnieje element po lewej stronie (czyli j > 0)
                sum += arr[i][j - 1];  // Dodajemy lewego sąsiada
                count++;  // Zwiększamy licznik sąsiadów
            }
            if(j < m - 1) {   // Sprawdzamy, czy istnieje element po prawej stronie (czyli j < m - 1)
                sum += arr[i][j + 1];  // Dodajemy prawego sąsiada
                count++;  // Zwiększamy licznik sąsiadów
            }

            // Obliczamy średnią z sumy wartości i zapisujemy wynik w tablicy tmp
            tmp[i][j] = sum / count;
        }
    }

    // Teraz przenosimy zmodyfikowane wartości z tablicy tmp do tablicy arr
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            arr[i][j] = tmp[i][j];
        }
    }
}

 void print_arr(float arr[][M], int n, int m) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j)
            std::cout << std::fixed << std::setprecision(1) << std::setw(5) << arr[i][j];
            std::cout << std::endl;
    }
    std::cout << std::endl;
 }

 int main() {
    srand(time(0));
    float arr[N][M];
    float tmp[N][M];
    fill_arr(arr,N,M);
    print_arr(arr,N,M);
    avg(arr,tmp,N,M);
    print_arr(arr,N,M);
 
    return 0;
 }