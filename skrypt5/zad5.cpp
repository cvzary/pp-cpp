    //Napisz funkcję w języku C++, która przyjmuje w argumencie liczbę całkowitą bez znaku. 
    //Funkcja powinna obliczyć wartość silni dla argumentu i zwrócić wynik. Napisz program w języku C++, który sprawdzi działanie tej funkcji.
#include <iostream>
using namespace std;
typedef unsigned int uint;
uint factorial(uint i) {
   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}
int main() {
    uint n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}