
//trigonometry.cpp
#include "trigonometry.h"
#include <cmath>
double deg2rad(double deg) {
    return deg * M_PI / 180.0;
}
double sinus(double x) {
    double sum = x, term = x, eps = 1e-4;
    for(int i = 1; fabs(term) > eps; ++i) {
        term *= -x * x / ((2 * i) * ( 2 * i + 1));
        sum += term;
    }
    return sum;
}