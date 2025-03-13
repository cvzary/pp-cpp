/*Napisz funkcję w jeżyku C++, która przyjmuje w argumentach liczbę 4-bajtową całkowitą nieujemną word oraz cztery wskaźniki na 1-bajtowe
liczby całkowitą nieujemne b0, b1, b2, b3. Funkcja ma wpisać w argumenty wskazywane wskaźnikami b0..b3 wartości kolejnych bajtów z liczby
word. Zadanie zrealizuj za pomocą arytmetyki wskaźnikowej i odpowiedniego ich rzutowania. Przetestuj działanie tej funkcji.*/

#include <iostream>
typedef unsigned char uchar;
typedef unsigned int uint;
void f(uint word, uchar *b0, uchar *b1, uchar *b2, uchar *b3) {
    *b0 = *((uchar*)&word + 0);
    *b1 = *((uchar*)&word + 1);
    *b2 = *((uchar*)&word + 2);
    *b3 = *((uchar*)&word + 3);
}
int main() {
    uint value = 0x0A0B0C0D;
    uchar v0 = 0, v1 = 0, v2 = 0, v3 = 0;
    uchar *b0 = &v0, *b1 = &v1, *b2 = &v2, *b3 = &v3;
    f(value, b0, b1, b2, b3);
    std::cout << (int)v0 << " " << (int)v1 << " " << (int)v2 << " " << (int)v3 << "\n";
    return 0;
}