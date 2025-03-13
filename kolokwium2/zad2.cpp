// // Napisz program w języku C++, który stworzy dynamiczną tablicę dwuwymiarową trójkątną arr o rozmiarze NxN wybranego typu liczbowego 
// i wypełni ją dowolnymi wartościami. Zdefiniuj funkcję, która w parametrze przyjmie wskaźnik na wskaźnik na typ void 
// (do tablicy trójkątnej arr), rozmiar N, wielkość w bajtach pojedynczego elementu sizen tablicy przekazanej w pierwszym parametrze oraz 
// dwie współrzędne x, y typu całkowitego. Funkcja ma zwrócić wskaźnik typu void ustawiony na podany we współrzędnych x, y element tablicy
// lub nullptr jeżeli nie ma takiego elementu. Pokaż użycie tej funkcji i wykonaj dealokację tablicy arr.
// Przykład:
//  0  1  2  3  4
//  5  6  7  8
//  8  9 10
// 11 12
// 13
// OUT: 7 (dla x=2, y=1)

#include <iostream>
using namespace std;

// Funkcja do obliczenia adresu elementu w tablicy trójkątnej
void* f(void** ptr, int n, int size, int x, int y) {
    int row = x - 1; // Wiersz
    int col = y - 1; // Kolumna

    // Sprawdzenie poprawności współrzędnych
    if (row < 0 || row >= n || col < 0 || col >= n - row) {
        return nullptr;
    }

    // Obliczenie wskaźnika do elementu
    return (void*)((char*)ptr[row] + col * size);
}

int main() {
    const int n = 5;
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n - i]; // Każdy wiersz ma coraz mniej elementów
    }

    // Wypełnianie tablicy wartościami
    int value = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            arr[i][j] = value++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int x, y;
    cout << "Podaj współrzędne (x, y): ";
    cin >> x >> y;

    void *adres = f((void**)(arr), n, sizeof(int), x, y);
    if (adres != nullptr) {
        int wartosc = *(int*)adres;
        cout << "Wartość pod adresem (" << x << ", " << y << "): " << wartosc << endl;
    } else {
        cout << "Brak takiego elementu w tablicy." << endl;
    }

    // Dealokacja pamięci
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
