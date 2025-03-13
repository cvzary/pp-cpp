/*Napisz program w języku C++, który wypełni trójwymiarową tablicę NxMxO wartościami pseudolosowymi, 
a następnie wypisze wszystkie elementy tej tablicy.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
const int N = 2, M = 3, O = 4;
void fill_arr(int arr[][M][O]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            for (int k = 0; k < O; k++)
                arr[i][j][k] = rand() % 100;
}
void print_arr(int arr[][M][O]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < O; k++)
                std::cout << arr[i][j][k] << ",";
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    srand(time(0));
    int arr[N][M][O] = {};
    fill_arr(arr);
    print_arr(arr);
    return 0;
}