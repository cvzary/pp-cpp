//Napisz program w języku C++, który wczytuje od użytkownika
//dwie liczby zmiennoprzecinkowe podwójnej precyzji a i b. 
//Program powinien wyświetlić te liczby, w następującym formacie a = wartosc_a 
//oraz w kolejnej linii b = wartosc_b. Następnie zamienić wartościami te liczby
// i ponownie je wyświetlić w tym samym formacie. (tzw. funkcja swap)

#include <iostream>

int main() {

    double a, b;
    std::cin >> a >> b;
    std::cout << "a = " << a << "\n" << "b = " << b << std::endl;
    double temp;
    temp = a;
    a = b;
    b = temp;

    std::cout << "Wartosci po zamianie :\n";
    std::cout << "a = " << a << "\n" << "b = " << b << std::endl;

    return 0;

}   