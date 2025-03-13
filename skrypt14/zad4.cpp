/*
Napisz program w języku C++, który usunie plik stworzony w poprzednim zadaniu.
*/

#include <cstdio>

int main() {
    if(remove("result.bin") != 0) perror("blad!");
    else printf("Usunieto!");
    return 0;
}