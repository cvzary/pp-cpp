/*Napisz funkcję w języku C++, która dostaje dwa argumenty: wskaźnik na stałą typu int i stały wskaźnik na zmienną typu int. 
Funkcja powinna przepisać zawartość stałej wskazywanej przez pierwszy argument do zmiennej wskazywanej przez drugi argument. 
Napisz program, który przetestuje działanie tej funkcji.*/
#include <iostream>

void f(int const *a, int *const b) {
    *b = *a;
}

int main() {
    const int v1 = 11;
    int v2 = 12;
    int const *a = &v1;
    int *const b = &v2;
    
    f(a, b);
    std::cout << v1 << " " << v2 << std::endl;
    
    return 0;
}