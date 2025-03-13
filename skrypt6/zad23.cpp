/*Napisz funkcję w języku C++, która przyjmuje w argumencie liczbę całkowitą dodatnią x i liczbę naturalną n, 
a następnie zwraca wartość bitu na n-tej pozycji liczby x.*/

#include <iostream>

bool check_bit(unsigned int x, unsigned int n) {
    return (x >> n) & 1;
}


int main() {
    unsigned int num = 10;
    std::cout << check_bit(num,0) << std::endl;
    std::cout << check_bit(num,1) << std::endl;
    std::cout << check_bit(num,2) << std::endl;
    std::cout << check_bit(num,3) << std::endl;
    return 0;
}