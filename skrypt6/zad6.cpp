/*Napisz program w języku C++, który wczytuje od użytkownika dwie liczby całkowite bez znaku a i b w formacie A=a B=b. 
Program powinien wypisać wartość liczby a po przesunięciu bitowym w lewo i w prawo o b w dwóch oddzielnych liniach. 
Użyj tylko jednego wywołania funkcji printf.*/

#include <cstdio>

int main() {
    unsigned int a,b;
    scanf("A=%u B=%u", &a, &b);
    printf("%u\n%u\n", a<<b, a>>b);
    return 0;
}