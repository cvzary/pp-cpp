/*
Napisz program w języku C++, który za pomocą wskaźnika do funkcji wywoła dwie funkcje: add i sub. 
Funkcja add powinna dodawać dwie liczby, zaś funkcja sub odejmować dwie liczby. 
Zaimplementowany program powinien sprawdzić poprawność działania tych funkcji.
*/

#include <iostream>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int (*fun)(int, int);
    fun = add;
    std::cout << fun(10,2) << std::endl;
    fun = sub;
    std::cout << fun(10,2) << std:: endl;
    return 0;
}