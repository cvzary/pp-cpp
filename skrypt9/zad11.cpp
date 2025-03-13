/*Napisz program w języku C++, który wczytuje od użytkownika trzy liczby całkowite n, m, o, a następnie dynamicznie alokuje pamięć dla 
tablicy wskaźników na n-elementową, m-elementową i o-elementową tablicę liczb zmiennoprzecinkowych. W kolejnym kroku program powinien 
uzupełnić tablice losowymi wartościami z przedziału <2.5f;5.4f>. Program powinien wyświetlić ten wiersz tablicy wskaźników, którego suma
elementów jest największa.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

const int N = 3;
const float MIN = 2.5f;
const float MAX = 5.4f;

void print_arr(float *arr, int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void fill_arr(float *arr, int n) {
    for(int i = 0; i < n; ++i)
        arr[i] = rand() / (1.f * RAND_MAX) * (MAX - MIN) + MIN;
}

float sum(float *arr, int n) {
    float result = 0;
    for(int i = 0; i < n; ++i)
        result += arr[i];
    return result;
}


int main() {
    srand(time(0));
    int idx = -1, sizes[N];
    float max = 0.f;

    for(int i = 0; i < N; ++i)
        std::cin >> sizes[i];
    
    float **arr = new float*[N];

    for(int i = 0; i < N; ++i) {
        arr[i] = new float[sizes[i]];
        fill_arr(arr[i], sizes[i]);
        print_arr(arr[i], sizes[i]);
    }

    for(int i = 0; i < N; ++i) {
        float result = sum(arr[i], sizes[i]);
        if(result > max)
        max = result, idx = i;
    }

    std::cout << "Result: " << max << std::endl;
    print_arr(arr[idx], sizes[idx]);

    for(int i = 0; i < N; ++i)
        delete[] arr[i];
    delete[] arr;

    return 0;
}