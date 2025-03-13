//Napisz program w języku C++, który przyjmuje jedno bajtową liczbę całkowitą 
//oraz jedno bajtową liczbę całkowitą bez znaku. 
//Program powinien wyświetlić wartość wczytanych zmiennych.

#include <cstdio>

int main() {

    typedef unsigned char uchar;
    char v1;
    uchar v2;

    scanf("%hhd%hhu", &v1, &v2);
    printf("Liczba ze znakiem to %hhd\nLiczba bez znaku to %hhu\n", v1, v2);

    return 0;
}