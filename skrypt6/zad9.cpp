/*Napisz program w języku C++, który poda wartość bezwzględną liczby całkowitej wczytanej od użytkownika nie używając instrukcji 
sterujących oraz zewnętrznych bibliotek.*/

#include <iostream>

int main() {
    int a, mask;
    scanf("%d", &a);
    mask = a >> sizeof(int) * (8 - 1);
    printf("%u\n", (a + mask) ^ mask);
    return 0;
}