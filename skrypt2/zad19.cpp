//Napisz program w języku C++, który pobierze ze standardowego wejścia znak i wyświetli informację, czy jest to mała litera.

#include <iostream>

int main() {
    char v;
    std::cin >> v;
    std::cout << (v>='a' && v<='z' ? "Podany znak jest mala litera." : "Podany znak nie jest mala litera.") << std::endl;

    return 0;
}