//Napisz program w języku C++ wyznaczający relatywistyczny wzrost masy obiektu poruszającego się z prędkością V, pobieranej z klawiatury.

#include <iostream>
#include <cmath>
const double c = 299792458.0;
const double m = 1;

int main() {
    double v,m_rel;
    std::cin >> v;
    if(v>=c) {
        std::cout << "predkosc nie moze byc mniejsza od predkosci swiatla" << std::endl;
        return 1;
    }   else {
        m_rel = m/sqrt(1 - (v * v) / (c * c));
        std::cout << "Masa wynosi : " << m_rel << " kg " << std::endl;
        
    }

    return 0;
}