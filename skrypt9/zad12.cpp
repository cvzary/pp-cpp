/*Napisz funkcję w języku C++, która przyjmie jako parametry wskaźniki na pierwszy i ostatni element tablicy. 
Bez użycia operatora subskryptowego [], a jedynie korzystając z arytmetyki wskaźników, wyświetl zawartość tablicy.*/
#include <iostream>

void print_arr(int *begin, int *end) {
    for(;begin <= end; ++begin)
        std::cout << *begin << " ";
    std::cout << std::endl;
}

int main() {
    const int n = 5;
    int arr[n] = {3,6,2,7,9};
    print_arr(arr,arr + n - 1);
    return 0;
}