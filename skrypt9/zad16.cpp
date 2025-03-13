/*Niektóre implementacje kompilatorów C++ przechowują wielkość dynamicznie zaalokowanej tablicy w postaci wartości typu long tuż 
przed tą tablicą. Napisz program w języku C++, który zaalokuje dynamicznie dwie tablice zmiennoprzecinkowe o wielkości m i n. 
Sprawdź jaka jest wartość komórki pamięci leżąca o jeden element typu long przed każdą z tych tablic. Sprawdź jaka jest różnica adresów 
obu tablic. Czy możesz na tej podstawie wysnuć jakieś wnioski. (Uwaga: wynik zadania może być zależny od kompilatora).*/

#include <iostream>

int main() {
    const int n = 10, m = 20;
    int *arr_0 = new int[n], *arr_1 = new int[m];
    std::cout << *(reinterpret_cast<long*>(arr_0) - 1) << " " << *(reinterpret_cast<long*>(arr_1) - 1) << std::endl;
    //std::cout << *((long *)arr_0 - 1) << " " << *((long *)arr_1 - 1) << std::endl; (rownowazne z powyzszym) 
    std::cout << static_cast<void*>(arr_0) << " " << static_cast<void*>(arr_1) << std::endl;
    std::cout << arr_1 - arr_0 << std::endl;
    return 0;
}