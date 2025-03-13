//Napisz program w języku C++, który przyjmuje od użytkownika 3 liczby całkowite i wyświetla największą z nich.

#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << std::endl;
//powyzsza linijka sprawdza; czy a jest wieksze od b, jesli tak to czy a jest wieksze od c, jesli jest to a jest najwieksze jesli nie to c
//jesli natomiast a nie jest wieksze od b to przechodzi do drugije czesci i sprawdza czy b jest wieksze od c, jesli jest wyswietla b jesli nie to c

    return 0;
}