//Napisz program w języku C++, który przyjmuje dwie liczby całkowite, 
//a następnie wyświetli iloraz tych liczb.

#include <iostream>

int main() {

    int a, b;
    std::cin >> a >> b;
    std::cout << "iloraz to: " << a / (float)b;

    return 0;
}