//rekurencja ogonowa

#include <iostream>
using namespace std;

// Rekurencja ogonowa
int sum_tail(int n, int acc) {
    if (n == 0) return acc; // Przypadek bazowy: zwróć zgromadzony wynik
    return sum_tail(n - 1, acc + n); // Wywołanie ogonowe: akumulujemy wynik w acc
}

int main() {
    int n;
    cin >> n;
    cout << "Suma od 1 do " << n << " wynosi: " << sum_tail(n, 0) << endl;
    return 0;
}