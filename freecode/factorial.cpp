typedef unsigned int uint;
#include <iostream>

uint factorial(uint value) {
    uint fac = 1;
    for(uint i = 1; i <= value; ++i) fac *= i;
    return fac;
}


int main() {
    uint value;
    std::cin >> value;
    std::cout << factorial(value) << std::endl;

    return 0;
}