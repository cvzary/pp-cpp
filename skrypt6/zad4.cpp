/*Napisz program w języku C++, który sprawdzi parzystość liczby wczytanej od użytkownika.
 Program powinien wyświetlić 1, jeśli liczba jest parzysta lub 0 w przeciwnym wypadku.*/

 #include <iostream>

 int main() {
    int n;
    std::cin >> n;
    std::cout << !(n & 1);
    return 0;
 }