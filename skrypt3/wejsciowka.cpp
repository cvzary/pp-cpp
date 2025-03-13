// Napisz program w języku C++, który obliczy pole sześciokąta foremnego. Program powinien wczytać długości boku od użytkownika,
//a następnie zapisać wynik do zmiennej typu całkowitego – result. Na koniec program powinien wyświetlić, 
//czy wartość wprowadzona do zmiennej result jest podzielna bez reszty przez 6, 3 lub 2.

#include <iostream>
#include <cmath>

int main() {
    float a;

    std::cin >> a;
    int result = 3 * pow(a,2) * sqrt(3) / 2;
   if(result % 6 == 0) {
    std::cout << "Wynik podzielny przez 6" << std::endl;
   }    else if(result % 3 == 0) {
    std::cout << "Wynik podzielny przez 3" << std::endl;
   }    else if(result % 2 == 0) {
    std::cout << "Wynik podzielny przez 2" << std::endl;
   }
   else {
    std::cout << "Nie podzielne przez 6,3 ani 2" << std::endl;
   }

   return 0;
}