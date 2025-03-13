/*Rozbuduj poprzednie rozwiązanie tak, aby program obliczył sumę wszystkich liczb nieparzystych w stworzonej tablicy, 
a następnie wyświetli wynik na standardowym wyjściu. Na koniec program powinien stworzyć nową tablicę, do której przepisze 
wartości nieparzyste i wyświetlić tą tablicę.*/

#include <iostream>

void print_arr(int *begin, int *end) {
    for(;begin <= end; ++begin) 
        std::cout << *begin << " ";
    std::cout << std::endl;
}

int odd_sum(int *begin, int *end) {
    int result = 0;
    for(;begin <=end; ++begin)
        if(*begin % 2)
            result += *begin;
    return result;
}

void rewrite_odd_nums(int *src_b, int *src_e, int *dst_b) {
    for(;src_b <= src_e; ++src_b)
        if(*src_b % 2) 
            *(dst_b++) = *src_b;
}

int count_odd_nums(int *begin, int *end) {
    int odd_count = 0;
    for(;begin <= end; ++begin)
        if(*begin % 2)
            odd_count++;
    return odd_count;
}

int main() {
    const int n = 5;
    int arr[n] = {3,1,3,6,5};
    int *odd_arr = nullptr;
    std::cout << std::endl;
    print_arr(arr, arr + n - 1);

    int sum_off_odds = odd_sum(arr, arr + n - 1);
    std::cout << "\nSum of odd numbers: " << sum_off_odds << "\n\n";
    int odd_count = count_odd_nums(arr, arr + n - 1);

    odd_arr = new int[odd_count];
    rewrite_odd_nums(arr, arr + n - 1, odd_arr);
    std::cout << "---------- Odd numbers array -----------" << std::endl;
    print_arr(odd_arr, odd_arr + odd_count - 1);

    delete[] odd_arr;

    return 0;
}