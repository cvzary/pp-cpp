/*Napisz funkcję w języku C++, która posortuje przekazaną w argumencie tablicę dowolną metodą. Dodatkowo napisz program, 
który wykona test jednostkowy tej funkcji, tj. taki, który pobierze ze standardowego wejścia tablicę liczb do posortowania oraz 
tablicę liczb już posortowanych i na wyjściu zwróci wynik (0 lub 1) porównania z działania funkcji sortującej 
z wczytaną posortowaną tablicą.*/

#include <iostream>

void my_swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

bool compare_arrs(const int arr_0[], const int arr_1[], int size) {
    for(int i = 0; i < size; ++i)
        if(arr_0[i] != arr_1[i])
            return false;
        return true;
}

void print_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; ++i)
        for(int j = 0; j < n - i - 1; ++j)
            if(arr[j] > arr[j+1])
                my_swap(arr[j], arr[j+1]);
                

}

int main() {
    int arr[] = {9, 5, 7, 8, 3, 2, 6, 1, 4};
    int sorted_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << compare_arrs(arr,sorted_arr,size) << std::endl;
    bubble_sort(arr,size);
    std::cout << compare_arrs(arr,sorted_arr,size) << std::endl;
    return 0;
}