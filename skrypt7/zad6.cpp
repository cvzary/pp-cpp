//Zmodyfikuj poprzednie zadanie tak, żeby zamiast tablicy dwuwymiarowej użyć do reprezentacji macierzy tablicy jednowymiarowej.

#include <iostream>
#include <iomanip>

int main() {

    const int n = 16;
    int arr[n * n];

    for(int i = 0; i < n; ++i) 
        for(int j = 0; j < n; ++j)
            arr[i * n + j] = i * j;

    

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j)
            std::cout << std::hex << std::setw(4) << arr[i * n + j];
        std::cout << std::endl;
    }

    return 0;
}