/*Zmodyfikuj poprzedni program tak aby korzystał z referencji. */

/*Napisz funkcję w języku C++, która przyjmuje jako argumenty wskaźniki do trzech zmiennych typu int. 
Funkcja powinna do trzeciego argumentu zapisać sumę wartości z liczb wskazywanych przez dwa poprzednie argumenty. 
Napisz program w języku C++, który przetestuje działanie tej funkcji.*/

#include <iostream>

void f(const int &a, const int &b, int &result) {
    result = a + b;
}

int main() {
    int result, a = 7, b = 6;
    f(a, b, result);
    std::cout << result << std::endl;
    return 0;
}