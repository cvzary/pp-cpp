//Napisz program w języku C++, który policzy odległość pomiędzy dwoma punktami. 
//Program powinien pobierać pary liczb określające współrzędne x i y kolejnych wierzchołków.

#include <iostream>
#include <cmath>

int main() {
    float x1,y1,x2,y2;
    std::cout << "Podaj wspolrzedne pierwszego punktu(x,y) : " << std::endl;
    std::cin >> x1 >> y1;
    std::cout << "Podaj wspolrzedne drugiego punktu(x,y) : " << std::endl;
    std::cin >> x2 >> y2;
    std::cout << "odleglosc miedzy punktami wynosi: " << sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    return 0;
}