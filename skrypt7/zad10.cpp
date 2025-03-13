/*Napisz program w języku C++, który dla dwuwymiarowej tablicy o elementach typu całkowitego wyświetli indeks wiersza o największej
 średniej wartości elementów.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

const int N = 4, M = 5, MIN = 0, MAX = 100;

int rand_value() {
    return rand() % (MAX - MIN + 1) + MIN;
}

void fill_arr(int arr[N][M]) {
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < M; ++j)
            arr[i][j] = rand_value();
}

void print_arr(int arr[N][M]) {
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j)
            std::cout << std::setw(3) << arr[i][j] << " ";
        std::cout << std::endl;
    }
}

void find_max_row(int arr[][M], int &result) {
    int sum;
    float max_avg = - 1, avg = 0;
    for(int i = 0; i < N; ++i) {
        sum = 0;
        for(int j = 0; j < M; ++j) sum += arr[i][j];
        avg = (float)sum / M;
        if(avg > max_avg) {
            max_avg = avg;
            result = i + 1;
        }
    }
}

int main() {
    srand(time(0));
    int arr [N][M] = {}, max_row;
    fill_arr(arr);
    print_arr(arr);
    find_max_row(arr, max_row);
    std::cout << "Row with the highest average: " << max_row << std::endl;
    return 0;
}




