//Napisz funkcję w języku C++, która oblicza wartość liczby PI metodą Monte Carlo.

#include <iostream>
#include <cstdlib>
#include <ctime>

float pi(int n) {
    float x, y;
    int counter = 0;
    for(int i = 0; i < n; ++i) {
        x= std::rand() / (1.f * RAND_MAX);
        y= std::rand() / (1.f * RAND_MAX);
        if((x - 0.5f) * (x - 0.5f) + (y - 0.5f) * (y - 0.5f) <= 0.5f * 0.5f)
            counter++;
    }
    return 4. * counter / n;
}
int main() {
    srand(time(0));
    std::cout << pi(100000) << std::endl;
    return 0;
}


