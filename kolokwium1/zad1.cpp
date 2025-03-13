/*Napisz program, który wczytuje od użytkownika 2 liczby całkowite r oraz h, które są odpowiednio promieniem koła oraz wysokością stożka 
zbudowanego na tym kole. Program ma wypisać na standardowym wyjściu objętość bryły. Jeżeli r lub h są mniejsze lub równe 0 wyświetl 
na standardowym wyjściu komunikat “Bledne dane”. (objętość stożka V=PI r^2 h / 3) */

#include <iostream>
#include <cmath>

int main() {
    int r,h;
    const float PI = 3.14;
    std::cin >> r >> h;
    if(r<= 0 || h <= 0) std::cout << "bledne dane" << std::endl;
    float volume = PI * std::pow(r,2) * h / 3;
    std::cout << volume;
    return 0;
}