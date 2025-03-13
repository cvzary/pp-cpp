/*
Zdefiniuj typ wyliczeniowy składający się z wartości odzwierciedlających typy: CHAR, UCHAR, INT, FLOAT. Napisz funkcję w języku C++, 
która przyjmie jako argumenty wskaźnik na void, pod którym znajduje się tablica, rozmiar tej tablicy oraz zmienną uprzednio zdefiniowanego
typu wyliczeniowego oznaczającą typ danych znajdujących się w tablicy. 
Funkcja powinna zwrócić średnią arytmetyczną danych w przekazanej tablicy za pomocą typu float. 
Napisz program w języku C++, który przetestuje działanie tej funkcji
*/

#include <iostream>
enum Type{CHAR, UCHAR, INT, FLOAT};
float avg(void *arr, int n, Type t) {
    float sum = 0;
    switch(t) {
        case CHAR: {
            char *sarr = (char*)arr;
            for(int i = 0; i < n; ++i) sum += sarr[i];
            break;
        }
        case UCHAR: {
            unsigned char *sarr = (unsigned char*)arr;
            for(int i = 0; i < n; ++i) sum += sarr[i];
            break;
        }
        case INT: {
            int *sarr = (int*)arr;
            for(int i = 0; i < n; ++i) sum += sarr[i];
            break;
        }
        case FLOAT: {
            float *sarr = (float*)arr;
            for(int i = 0; i < n; ++i) sum += sarr[i];
            break;
        }
    }
    return sum / n;
}
int main() {
    unsigned char arr1[5] = {50, 100, 150, 200, 250};
    std::cout << avg(arr1, 5, UCHAR) << std::endl;
    float arr2[5] = {50, 100, 150, 200, 250};
    std::cout << avg(arr2, 5, FLOAT) << std::endl;
    return 0;
}