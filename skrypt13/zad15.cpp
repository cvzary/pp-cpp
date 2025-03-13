/*
Napisz funkcję w języku C++, która otrzymuje jako argumenty tablicę points przechowującej obiekty typu Point (z poprzedniego zadania)
i zwraca jako wartość najmniejszą spośród odległości pomiędzy punktami przechowywanymi w tablicy points. 
Zakładamy, że otrzymana w argumencie tablica ma co najmniej dwa punkty
*/

#include <iostream>
#include <cmath>

class Point {
    public:
    float x,y;
};

float dist(Point a, Point b) {
    return std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
}

float min_distance(Point points[], unsigned int n) {
    float tmp, min = dist(points[0], points[1]);
    for(unsigned int i = 1; i < n - 1; ++i) {
        tmp = dist(points[i], points[i+1]);
        if(tmp < min) min = tmp;
    }
    return min;
}

int main() {
    const unsigned int n = 5;
    Point arr[n] = {0.5f, 0.5f, 1.f, 1.f, 3.f, 3.f, 4.f, 4.f, 7.f, 7.f};
    std::cout << min_distance(arr, n) << std::endl;
    return 0;
}