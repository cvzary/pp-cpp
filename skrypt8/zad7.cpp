/*Napisz funkcję w języku C++, która przyjmuje w argumencie liczbę całkowitą oraz zmienną bool przez referencję. 
Funkcja powinna sprawdzić, za pomocą operacji bitowych, czy cyfry przekazanej liczby całkowitej są parzyste. 
Ponadto funkcja powinna ustawić przekazaną zmienną typu bool na wartość true, jeśli wszystkie cyfry są parzyste i false w 
przeciwnym wypadku.
Zmodyfikuj poprzedni program tak, aby zmienna typu bool w argumencie była przekazywana przez wskaźnik.*/
#include <iostream>
using namespace std;
void f(int number, bool *result) {
    while(number) {
        if(number % 10 & 1) {
            *result = false;
            return;
        }
        number /= 10;
    }
    *result = true;
}
int main() {
    bool result;
    f(222222, &result);
    cout << result << endl;
    return 0;
}