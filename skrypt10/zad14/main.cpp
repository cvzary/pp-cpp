//main.cpp
#include "data_time.h"
#include "trigonometry.h"
#include <iostream>
#include <cmath>
int main() {
    double result, deg = 30, rad = deg2rad(deg);
    start_measure();
    for(int i = 0; i < 1000000; ++i)
    result = std::sin(rad);
    elapsed_measure();
    std::cout << "sinus z biblioteki cmath: " << result << "\n";
    start_measure();
    for(int i = 0; i < 1000000; ++i)
    result = sinus(rad);
    elapsed_measure();
    std::cout << "sinus z własnej implementacji: " << result << "\n";
    return 0;
}