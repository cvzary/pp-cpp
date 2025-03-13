/*Napisz funkcję rekurencyjną, która zamienia liczbę binarną, reprezentowaną za pomocą napisu, na liczbę całkowitą. Zademonstruj jej użycie.
PRZYKŁAD:
IN: "10010011"
OUT: 147*/
#include <iostream>

int str_to_int_rec(const char str[], int i = 0) {
    if(str[i] == 0) return 0;
    int bitValue = str[i] - '0';
    int power = strlen(str) - 1 - i;
    
    return (bitValue << power) + str_to_int_rec(str, i + 1);
}

int main() {
    const char binary[100] = "10010011";
    int decimal = str_to_int_rec(binary,0);
    std::cout << decimal << std::endl;
    return 0;
}