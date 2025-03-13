//Napisz program w języku C++, który wczyta ze standardowego wejścia liczbę całkowitą, a następnie obliczy sumę cyfr tej liczby.

#include <iostream>
int main() {
int value, sum = 0;
std::cin >> value;

do sum += value % 10; 
while (value /= 10);

std::cout << "Suma cyfr liczby wynosi: " << sum << std::endl;
return 0;
}


