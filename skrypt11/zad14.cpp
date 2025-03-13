/*
Napisz funkcję w języku C++, która przyjmie dwa parametry liczbę całkowitą x oraz liczbę całkowitą d, w której zapisana będzie cyfra. 
Funkcja powinna zwrócić liczbę wystąpień cyfry d w liczbie x. W implementacji tej funkcji nie używaj pętli.
*/

#include <iostream>
int count_occurrences_of_digit(int x, int d) {
    if(!x) return 0;
    int tmp = 0;
    if(x % 10 == d) tmp++;
    return count_occurrences_of_digit(x / 10, d) + tmp;
}
int main() {
    int x,d;
    std::cin >> x >> d;
    std::cout << count_occurrences_of_digit(x, d) << std::endl;
    return 0;
}