//Napisz program w języku C++, który pobierze ze standardowego wejścia 
//zmiennoprzecinkowe długości podstaw i wysokość trapezu, 
//a następnie wyświetli na standardowym wyjściu jego pole.

#include <iostream>

int main() {
    double a, b, h;
    std::cin >> a >> b >> h;
    std::cout << "Pole trapezu wynosi: " << (a+b) * h / 2 << std::endl; 

    return 0;
}