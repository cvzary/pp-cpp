/*Napisz program w języku C++ sprawdzający, czy liczba wczytana od użytkownika jest potęgą dwójki. 
Program powinien wyświetlić 1, jeśli liczba jest potęgą dwójki lub 0 w przeciwnym wypadku.*/
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::cout << (n > 0 && !(n & (n-1)));
    return 0;
}