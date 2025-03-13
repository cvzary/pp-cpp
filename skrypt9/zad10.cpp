/*Napisz program w języku C++, który wczytuje od użytkownika dwie liczby całkowite n, m, a następnie dynamicznie alokuje pamięć dla 
n-elementowej tablicy liczb całkowitych. W kolejnym kroku program powinien uzupełnić tablicę losowymi wartościami z przedziału <-50;50>
i je posortować. Na koniec program powinien znaleźć wszystkie pary liczb całkowitych, których suma jest równa liczbie m, wyświetlić
je i podać ich ilość.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

const int MIN = -50;
const int MAX = 50;


void print_arr(int *arr, int n) {
    for(int i = 0 ; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void fill_arr(int *arr, int n) {
    for(int i = 0; i < n; ++i)
        arr[i] = rand() % (MAX - MIN + 1) + MIN;
}

void bubble_sort(int *arr, int n) {
    for(int i = 0; i < n - 1; ++i)
        for(int j = 0; j < n - i - 1; ++i)
            if(arr[j] > arr[j+1])
                std::swap(arr[j],arr[j+1]);
}

void f(int *arr, int n, int m) {
    int count = 0;
    for(int i = 0; i < n - 1; ++i)
        for(int j = i + 1; j < n; ++j)
            if(arr[i] + arr[j] == m) {
                count++;
                std::cout << arr[i] << " , " << arr[j] << std::endl;
            }
        std::cout << "Count: " << count << std::endl;
}

int main() {
    srand(time(0));
    int n,m;
    std::cin >> n >> m;
    int *arr = new int[n];
    fill_arr(arr,n);
    bubble_sort(arr,n);
    print_arr(arr,n);
    std::cout << "\n\n";
    f(arr,n,m);

    delete[] arr;
    return 0;
}   