/*
Zaprojektuj klasę Point, która posiada dwa pola typu zmiennoprzecinkowego x, y. 
Następnie napisz funkcję, która przyjmuje tablicę obiektów typu Point i jej rozmiar, a także trzy liczby rzeczywiste a, b i r, 
będące parametrami następującego równania okręgu (x - a)2 + (y - b)2 = r2. Funkcja powinna zwrócić, za pomocą argumentu, 
wskaźnik na tablicę wskaźników na punkty położne w zdefiniowanym kole.
*/

#include <iostream>
#include <cmath>

class Point {
    public:
    float x,y;
};

float get_distance(const Point &p, float x, float y) {
    return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

int count_points_in_circle(Point *arr, int n, float a, float b, float r) {
    int count = 0;
    for(int i = 0; i < n; ++i)
        if(r >= get_distance(arr[i], a, b))
            count++;
    return count;
}
void f(Point *arr, int n, float a, float b, float r, Point **result) {
    for(int i = 0, j = 0; i < n; ++i)
        if(r >= get_distance(arr[i], a, b))
            result[j++] = &arr[i]; //arr + i;
}

int main() {
    Point arr[5] = {0.2, 0.3f, 1.f, 1.5f, 2.f, 2.2f, 0.1f, 0.1f, 3.f, 3.2f};
    int count = count_points_in_circle(arr, 5, 0.f, 0.f, 1.f);
    Point **result = new Point*[count];
    f(arr, 5, 0.f, 0.f, 1.f, result);
    for(int i = 0; i < count; ++i)
        std::cout << "(" << result[i]->x << ":" << result[i]->y << ")\n";
    delete[] result;
    return 0;
}
