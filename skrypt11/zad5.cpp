/*
Napisz program w języku C++, który posortuje malejąco tablicę napisów za pomocą funkcji qsort.
*/

#include <cstdlib>
#include <iostream>
#include <cstring>

int str_cmp(char str_0[], char str_1[]) {
    unsigned int i = 0;
    while(str_0[i] && (str_0[i] == str_1[i])) ++i;
    return str_0[i] - str_1[i];
}

int compar(const void *p1, const void *p2) {
    return -str_cmp((char *)p1, (char *)p2);
    //return -strcmp((const char *)p1, (const char *)p2); - jeżeli korzystamy z pliku nagłówkowego cstring
}

int main() {
    char arr[5][100] = {
        "tygrys syberyjski", 
        "krokodyl nilowy", 
        "panda wielka", 
        "tygrys azjatycki",
        "chomik europejski"
    };
    qsort(arr, 5, 100, compar);
    for(int i = 0; i < 5; ++i)
        std::cout << arr[i] << std::endl;
    return 0;
}