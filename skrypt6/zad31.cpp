/*Napisz program w języku C++, który konwertuje liczbę całkowitą (bez znaku) na jej reprezentację znakową (string) –
 ekwiwalent funkcji bibliotecznej sprintf().
*/
#include <iostream>
#include <cmath>

unsigned int num_digits(int value) {
    if(value<0) value = -value;
    unsigned int result = 0;
    do ++result; while(value/=10);
    return result;
}


void my_sprintf(unsigned int value, char result[]) {
    for(unsigned int i = 0, tmp = pow(10, num_digits(value) - 1); tmp; ++i, value %= tmp, tmp /=10)
        result[i] = '0' + (value/tmp);
}


int main() {
    int k = 267;
    char str[100] = {};
    my_sprintf(k, str);
    std::cout << str << std::endl;
    return 0;
}