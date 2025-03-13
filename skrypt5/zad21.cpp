/*Napisz funkcję w języku C++, która przyjmie jako argumenty tablicę dwuwymiarową liczb całkowitych o n wierszach i 10 kolumnach 
oraz liczbę n. Funkcja powinna sprawdzić, czy tablica spełnia warunek, że suma wartości komórek z każdej kolumny, 
jest większa od sumy wartości z kolumny ją poprzedzającej. 
Funkcja powinna zwrócić wartość logiczną informującą, czy warunek został spełniony.*/
#include <iostream>

bool check_condition(int arr[][10], int n) {
    for(int i = 0; i < n - 1; ++i) {
        int sum_0 = 0, sum_1 = 0;
        for(int j = 0; j < 10; ++j) {
            sum_0 += arr[i][j];
            sum_1 += arr[i+1][j];
        }
        if(sum_0 >= sum_1) return false;
    }
    return true;
}

int main() {
    int arr[3][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25, 26, 27, 28, 29, 30}};
    unsigned int n = 3;
    std::cout << (check_condition(arr, n) ? "Warunek został spełniony." : "Warunek nie został spełniony.") << std::endl;
    return 0;
}