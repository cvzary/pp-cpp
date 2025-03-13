/*
Napisz funkcję w języku C++, która otrzymuje jako argumenty tablice points1 i points2 przechowująca elementy typu Point i przepisuje 
zawartość tablicy points1 do tablicy points2. Zdefiniuj strukturę Point, która ma dwa atrybuty publiczne będące liczbami zmiennoprzecinkowymi.
*/

#include <iostream>

struct Point {
    float x,y;
};

void rewrite(Point points1[], Point points2[], unsigned int n) {
    for(unsigned int i = 0; i < n; ++i) points2[i] = points1[i];
}

void print_arr(Point arr[], unsigned int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i].x << " " << arr[i].y << std::endl;
    std::cout << std::endl;
}

int main() {
    const unsigned int n = 5;
    Point arr_0[n] = {0.f, 0.f, 1.f, 1.f, 3.f, 3.f, 4.f, 4.f, 7.f, 7.f}, arr_1[n] = {};
    print_arr(arr_1, n);
    rewrite(arr_0, arr_1, n);
    print_arr(arr_1, n);
    return 0;
}