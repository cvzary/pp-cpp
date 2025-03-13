/*
napisz funkcje ktora przyjmuje w argumencie liczbe calkowita, funkcja powinna sprawdzic czy
cyfry przekazanej liczby calkowitej sa parzyste. ponadto funkcja powinna zwrocic za pomoca argumentu
true jesli wszystkie cyfry sa parzyste i false w przeciwnym wypadku. napisz program ktory przetestuje dzialanie
tej funkcji w c++.
*/

#include <iostream>
#include <cmath>

bool are_all_digits_even(int number) {
    number = std::abs(number);
    while(number) {
        int last_digit = number % 10;
        if(last_digit % 2 != 0)
            return false;
        number /= 10;
    }
    return true;
}

int main() {
    int number;
    std::cin >> number;
    bool result = are_all_digits_even(number);
    if(result) std::cout << "all digits are even" << std::endl;
    else std::cout << "not every digit is even" << std::endl;
    return 0;
}