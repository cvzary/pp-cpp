/*
Napisz program w języku C++, który wczyta od użytkownika dwie liczby całkowite n i x, a następnie stworzy dwie n-elementowe tablice 
liczb całkowitych. Następnie program powinien uzupełnić tablicę kolejnymi wartościami zaczynając od x i ustawić te wartości w 
losowej kolejności (wymieszać). Na koniec program powinien wyświetlić obie tablicę, sumę wartości w tablicach oraz wynik 
iloczynu skalarnego dwóch tak zdefiniowanych wektorów. Spróbuj rozwiązać zadanie wykorzystując głównie algorytmy i funkcje biblioteczne 
np. iota z pliku nagłówkowego numeric.
*/

#include <iostream>
#include <numeric>
#include <algorithm>
#include <random>

void print_arr(int *b, int *e) {
    for(int *i = b; i < e; ++i) 
        std::cout << *i << " "; 
    std::cout << "\n";
}

int main() {
    int n, x, init = 0, *t1 = nullptr, *t2 = nullptr;
    std::cin >> n  >> x;
    t1 = new int[n];
    t2 = new int[n];
    std::iota(t1, t1 + n, x);
    std::iota(t2, t2 + n, x);
    std::random_device rd;
    std::mt19937 g(rd()); // Generator losowy
    std::shuffle(t1, t1 + n, g);
    std::shuffle(t2, t2 + n, g);
    print_arr(t1, t1 + n);
    print_arr(t2, t2 + n);
    std::cout << std::accumulate(t1, t1 + n, init) << std::endl;
    std::cout << std::inner_product(t1, t1 + n, t2, init) << std::endl;
    delete[] t1;
    delete[] t2;
    return 0;
}