/*Napisz funkcję w języku C++, która przyjmuje w argumencie liczbę całkowitą bez znaku K. 
Funkcja powinna zwracać wartość K-tego wyrazu ciągu Fibonacciego. Napisz program w języku C++, który sprawdzi działanie tej funkcji.*/

#include <iostream>
using namespace std;

// Funkcja obliczająca K-ty wyraz ciągu Fibonacciego
unsigned long long fibonacci(unsigned int K) {
    if (K == 0) {
        return 0;  // 0-ty wyraz ciągu Fibonacciego to 0
    } else if (K == 1) {
        return 1;  // 1-szy wyraz ciągu Fibonacciego to 1
    }

    unsigned long long a = 0, b = 1, c;
    for (unsigned int i = 2; i <= K; ++i) {
        c = a + b;  // Obliczanie kolejnych wyrazów ciągu
        a = b;
        b = c;
    }
    return b;  // Zwrócenie K-tego wyrazu ciągu
}

int main() {
    unsigned int K;
    
    // Pobranie wartości K od użytkownika
    cout << "Podaj numer wyrazu ciągu Fibonacciego (K): ";
    cin >> K;

    // Sprawdzenie, czy K jest liczbą dodatnią
    if (K >= 0) {
        // Wywołanie funkcji i wyświetlenie wyniku
        cout << "K-ty wyraz ciągu Fibonacciego dla K = " << K << " to: " << fibonacci(K) << endl;
    } else {
        cout << "Proszę podać liczbę całkowitą większą lub równą 0." << endl;
    }

    return 0;
}

/*#include <cstdio>
#include <ctime>
typedef unsigned int uint;
uint count;
uint fib_rec(uint n) {
    ++count;
    return n < 2 ? n : (fib_rec(n - 2) + fib_rec(n - 1));
}
uint fib_it (uint n) {
    uint a = 0, b = 0, c = 1;
    ++count;
    if (!n) return 0;
    while (--n) {
        ++count;
        a = b;
        b = c;
        c = a + b;
    }
    return c;
}
int main() {
    uint n, result;
    while(scanf("%d", &n) == 1) {
        count = 0;
        clock_t start = clock();
        result = fib_rec(n);
        clock_t end = clock();
        printf("fib_rec: %u, %u, %f\n", result, count, (float)(end - start) / CLOCKS_PER_SEC);
        count = 0;
        start = clock();
        result = fib_it(n);
        end = clock();
        printf("fib_it: %u, %u, %f\n", result, count, (float)(end - start) / CLOCKS_PER_SEC);
    }
    return 0;
}
*/