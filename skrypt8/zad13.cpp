/*Napisz program w języku C++, który wyświetli wartość liczby typu float ale interpretowanej jak gdyby była ona liczbą typu unisigned int.
Użyj odpowiednich rzutowań wskaźnikowych.*/

#include <iostream>

int main() {
    float value = 6.5f;
    float *f_ptr = &value;
    std::cout << *(unsigned int *)f_ptr << std::endl;
    return 0;
}