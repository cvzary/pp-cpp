/*
Napisz program w języku C++, który: dodaje, odejmuje, mnoży, dzieli dwie liczby zespolone oraz oblicza sprzężenie zespolone.
Następnie program powinien wyświetlić wyniki tych operacji.
*/

#include <iostream>
#include <complex>

int main() {
    std::complex<double> z1(1.0, 3.0);
    std::complex<double> z2(1.0, -4.0);

    std::complex<double> sum = z1 + z2;
    std::complex<double> difference = z1 - z2;
    std::complex<double> product = z1 * z2;
    std::complex<double> quotient = z1 / z2;
    std::complex<double> conjugate = std::conj(z1);

    std::cout << "Real part(z1): " << std::real(z1) << " Imaginary part(z1): " << std::imag(z1) << std::endl;
    std::cout << sum << " " << difference << " " << product << " " << quotient << " " << conjugate << std::endl;

    return 0;
}