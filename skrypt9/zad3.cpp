/*Napisz program w języku C++, który wczyta od użytkownika nieujemną liczbę całkowitą n, a następnie dynamicznie zaalokuje pamięć dla
n elementowej tablicy liczb rzeczywistych. Program powinien wypełnić tablicę zerami, a następnie wyświetlić wszystkie elementy tej
tablicy. Na koniec program powinien zmienić rozmiar tablicy na 10 i wypełnić ją jedynkami.*/

#include <iostream>

int main() {
    unsigned int n;
    std::cin >> n;
    float *arr;
    arr = new float[n];

    for(int i = 0; i < n; ++i)
        arr[i] = 0;

    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    delete[] arr;

    arr = new float[10];
    for(int i = 0; i < 10; ++i)
        arr[i] = 1.f;

    for(int i = 0; i < 10; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    

    delete[] arr;

    return 0;
}