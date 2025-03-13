//napisz funkcje wyswietalajca tablice, funkcje sortujaca, oraz funkcje losujaca tablice od 0 do max podane przez user, na koniec program

#include <iostream>
#include <cstdlib>
#include <ctime>
const int N = 10;
void print_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void randomFillArray(int arr[], int n, int max) {
    for(int i = 0; i < n; ++i) 
        arr[i] = rand() % (max + 1);
}

void my_swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; ++i)
        for(int j = 0; j < n - i - 1; ++j)
            if(arr[j] > arr[j+1])
                my_swap(arr[j], arr[j+1]);
}

int main() {
    srand(time(0));
    int arr[N];
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = 100;
    randomFillArray(arr, n, max);
    print_arr(arr,n);
    bubble_sort(arr,n);
    print_arr(arr,n);

    return 0;
}