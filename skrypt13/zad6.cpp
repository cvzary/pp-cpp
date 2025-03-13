/*
Napisz program w języku C++, który umożliwi przechowywanie czterech elementów, typu zdefiniowanego w poprzednim zadaniu, o dowolnych 
współrzędnych. Następnie program powinien obliczyć i wyświetlić obwód figury wskazanej przez te punkty.
*/

#include <iostream>
#include <cmath>

struct Point{
    float x, y;
};

int main() {
    Point arr[4] = {1.f,1.f, 1.f,2.f, 2.f,2.f, 2.f,1.f};
    //lub Point arr[4] = {{1.f,1.f}, {1.f,2.f}, {2.f,2.f}, {2.f,1.f}};
    float sum = 0;
    for(int i = 0; i < 4; ++i)
        sum += sqrt(pow(arr[i].x - arr[(i + 1) % 4].x, 2) + pow(arr[i].y - arr[(i + 1) % 4].y, 2));
        std::cout << sum << std::endl;
        return 0;
}