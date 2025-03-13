/*Napisz program w języku C++, który utworzy dwuwymiarową tablicę liczb całkowitych o liczbie wierszy i kolumn równej 16.
W tablicy zapisz wyniki tabliczki mnożenia i wyświetl w systemie szesnastkowym tak,
aby indeksy komórek były jednocześnie czynnikami mnożenia. */

#include <iostream>
#include <iomanip>

int main() {

    const int n = 16;
    int arr[n][n];

    for(int i = 0; i < n; ++i) 
        for(int j = 0; j < n; ++j)
            arr[i][j] = i * j;

    

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j)
            std::cout << std::hex << std::setw(4) << arr[i][j];
        std::cout << std::endl;
    }

    return 0;
}