/*Napisz funkcję w języku C++, która generuje szum Gaussowski. Funkcja powinna przyjmować dwie liczby rzeczywiste mean (średnią) 
i sigma (wariancję). Użyj metody polarnej Marsaglia.*/


#include <cstdlib>
#include <cmath>
using namespace std;
static const double two_pi = 2.0 * M_PI;
    
double generate_gaussian_noise(double mean, double sigma) {
    double z, u1, u2;
    do {
       u1 = rand() * (1.0 / RAND_MAX);
       u2 = rand() * (1.0 / RAND_MAX);
       z = u1 * u1 + u2 * u2;
    } while (z >= 1 || z == 0);
    z = sqrt(-2.0 * log(z) / z);
    return u1 * z * sigma + mean;
}