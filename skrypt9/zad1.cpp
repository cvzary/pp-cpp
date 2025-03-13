/*Napisz funkcję w języku C++, która przyjmuje jako argumenty wskaźniki do dwóch zmiennych typu int. 
Funkcja powinna zwrócić wskaźnik do mniejszej wartości z liczb wskazywanych przez argumenty, jeśli argumenty mają taką samą wartość 
funkcja powinna zwracać wskaźnik na pierwszy argument.*/
#include <iostream>

int *f(int *a, int *b) {
    return (*a <= *b) ? a : b;
}

int main() {
    int a = 6, b = 6;
    int *result = f(&a, &b);
    std::cout << result << " " << &a << " " << &b << " " << *result << std::endl;
    return 0;
}