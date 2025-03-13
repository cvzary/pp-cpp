/*
Napisz program w języku C++, który zdefiniuje typ złożony reprezentujący punkt w dwuwymiarowej przestrzeni euklidesowej. 
Punkt powinien być wyznaczony za pomocą dwóch współrzędnych. 
Następnie wczytaj od użytkownika współrzędne dwóch punktów. Oblicz i wyświetl odległość pomiędzy tymi punktami.
*/


#include <iostream>
#include <cmath>

//version 1.0
// struct Point{
//     float x,y;
// };

// int main() {
//     Point a, b;
//     std::cin >> a.x >> a.y >> b.x >> b.y;
//     std::cout << sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)) << std::endl;

//     return 0;
// }

//version 2.0

struct Point{
    float *x, *y;
};

int main() {
    Point a, b;
    float a_v = 0, b_v = 2;
    a.x = a.y = &a_v;
    b.x = b.y = &b_v;
    std::cout << sqrt(pow(*a.x - *b.x, 2) + pow(*a.y - *b.y, 2)) << std::endl;

    return 0;
}
