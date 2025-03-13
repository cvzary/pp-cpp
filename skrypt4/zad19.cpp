/*Napisz program w języku C++, który utworzy n-elementową tablicę liczb całkowitych i zapełni ją danymi. 
Program powinien wyświetlić indeks komórki tablicy, w której została znaleziona liczba o największej wartości. 
Jeżeli ta sama liczba pojawia się w większej liczbie komórek, należy wyświetlić indeks dowolnej z nich.*/

#include <iostream>

unsigned int max_value_idx(int arr[], unsigned int n) {
    int max = arr[0];
    unsigned int idx = 0;
    for(unsigned int i = 1; i < n; ++i)
        if(max < arr[i])
            max = arr[i], idx = i;
        return idx;
}

int main() {
    const unsigned int n = 5;
    int arr[n] = {1,5,2,3,4};

    std::cout << "indeks komorki z najwieksza wartoscia: " << max_value_idx(arr,n) << std::endl;

    return 0;
}