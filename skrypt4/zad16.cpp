/*Napisz program w języku C++, który rozbudowuje funkcjonalność poprzedniego programu o możliwość przesuwania
 o dowolną ilość indeksów (również dla przesunięć ujemnych).*/

#include <iostream>
void print_arr(int arr[], unsigned int n) {
    for (unsigned int i = 0; i < n; ++i) 
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
void move_arr(int arr[], int n, int tmp[], int m) {
    for (int i = 0; i < n; ++i) {
        int idx = (i + m) % n;
        if (idx < 0) idx += n;
        tmp[idx] = arr[i];
    }
    for (int i = 0; i < n; ++i) arr[i] = tmp[i];
}
int main() {
    const unsigned int n = 5;
    int m, arr[n] = {1, 2, 3, 4, 5}, tmp[n] = {};
    std::cin >> m;
    print_arr(arr, n);
    move_arr(arr, n, tmp, m);
    print_arr(arr, n);
    
    return 0;
}