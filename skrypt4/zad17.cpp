/*Napisz program w języku C++, który utworzy 5-elementową tablicę liczb całkowitych 
i zapisze w jej komórkach 5 liczb podanych ze standardowego wejścia. Na koniec program powinien wyświetlić elementy tablicy.*/
#include <iostream>

void print_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int arr[5];

    for(int i = 0; i < 5; ++i) std::cin >> arr[i];

    print_arr(arr, 5);
    return 0;
}