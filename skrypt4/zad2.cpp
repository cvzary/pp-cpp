//Napisz funkcję w języku C++, która przyjmuje dwie liczby całkowite i zwraca ich iloczyn.

#include <iostream>

int product(int a, int b) 
{
    return a * b;
}

// koniec zadania ale mozna napisac program ktory sprawdzi czy funkcja dziala ->

int main() {
    int v1, v2;
    std::cin >> v1 >> v2;                           // mozna v1 nazwac a i b, tez bedzie dzialac poniewaz to nie to samo co wyzej!
    std::cout << product(v1,v2) << std::endl;
    return 0;
}