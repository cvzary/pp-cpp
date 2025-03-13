/*Napisz program w języku C++, który w nieskończonej pętli dynamicznie alokuj 10000-elementową tablicę liczb całkowitych bez jej zwalniania.
W dowolnym programie do badania aktywności systemu (np. menedżerze zadań) obserwuj zwiększające się zapotrzebowanie programu na pamięć
operacyjną będącej skutkiem wycieku pamięci. Przerwij działanie programu przed zawieszeniem systemu.*/

#include <iostream>

int main() {
    while(true) int *ptr = new int[10000];
    return 0;
}