//rekurencja tradycyjna
#include <iostream>
using namespace std;

// Tradycyjna rekurencja
int sum(int n) {
    if (n == 0) return 0; // Przypadek bazowy: suma liczb od 1 do 0 to 0
    return n + sum(n - 1); // Dodaj n do wyniku sumy od 1 do (n-1)
}

int main() {
    int n = 5;
    cout << "Suma od 1 do " << n << " wynosi: " << sum(n) << endl;
    return 0;
}