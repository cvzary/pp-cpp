/*
Zaprojektuj klasę Point, która posiada dwa pola typu zmiennoprzecinkowego x, y. 
Następnie napisz funkcję w języku C++, która przyjmuje tablicę obiektów typu Point i jej rozmiar.
Funkcja w argumencie będącym wskaźnikiem na obiekt klasy Point powinna zwrócić współrzędne punkty, 
który jest położony najbliżej punktu (0,0).
*/

#include <iostream>
#include <cmath>

class Point {
    public:
    float x,y;
};

float get_distance(const Point &p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

void f(Point *arr, int n, Point *&p) {
    float cur_distance, min_distance = get_distance(arr[0]);
    int id = 0;
    for(int i = 1; i < n; ++i) {
        cur_distance = get_distance(arr[i]);
        if(min_distance > cur_distance) {
            min_distance = cur_distance;
            id = i;
        }
    }
    p = arr + id;
}

int main() {
    Point arr[5] = {0.2, 0.3f, 1.f, 1.5f, 2.f, 2.2f, 0.1f, 0.1f, 3.f, 3.2f};
    Point *p;
    f(arr, 5, p);
    std::cout << "(" << p->x << ":" << p->y << ")\n";
    return 0;
}