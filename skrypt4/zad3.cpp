//Napisz program w języku C++, który wyświetla zmienną całkowitą wczytaną od użytkownika. 
//Wartość tej zmiennej powinna być modyfikowana za pomocą funkcji f, która przyjmuje jeden argument całkowity. 
//Funkcja powinna ustawiać wartość zmiennej na wartość przekazaną w argumencie.
#include <iostream>

int value;

void setValue(int a) {
    value = a;
}

int main() {
    std::cin >> value;
    std::cout << value;
    setValue(10);
    std::cout << value;
    return 0;
}