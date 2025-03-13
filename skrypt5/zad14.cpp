// Napisz funkcję w języku C++, która dostaje jako argument liczbę całkowitą k i zwraca jako wartość największą możliwą liczbę n taką że
// 2^n < k (możliwie najbliższa wartość kolejnej potęgi dwójki)
// Przykład:
// WE: k = 1100
// WY: n = 10, bo 2^10 (1024) < 1100 i jednocześnie 10 jest największą liczba spełniającą warunek 2^10<k.


#include <iostream>
#include <cmath>

int max_pow_of_two(int k) {
    int n = 0;
    for(;pow(2,n) < k; ++n);
    return n-1;
        
}

// int greatest_pow_of_two(int k) {
//     int n = 0;
//     do ++n; while(pow(2,n) < k);
//     return n - 1;
// }

int main() {
    int k = 1100;
    std::cout << max_pow_of_two(k) << std::endl;
    return 0;
}