/*Napisz program w języku C++, który wczyta od użytkownika dwie wartości całkowite a i b. 
Program powinien obliczyć wynik następującego równania: sqrt(a / b^5), jeśli użytkownik wprowadził wartości mniejsze od zera 
należy zwrócić odpowiedni komunikat, a dla b = 0 wartość NAN.*/

#include <iostream>
#include <cmath>

int main() {
    int a,b;
    std::cin >> a >> b;
    float result = sqrt(a/(std::pow(b,5)));
    if(a < 0 || b < 0)
        std::cout << "niepoprawne dane wejsciowe\n";
    else std::cout << (b == 0 ? NAN : result);
    
    return 0;
}