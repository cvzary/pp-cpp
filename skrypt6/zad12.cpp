/*Napisz funkcję w języku C++, która dla otrzymanej w argumencie nieujemnej liczby całkowitej n 
zwróci kolejne wyrazy ciągu zdefiniowanego w następujący sposób:
a0 = a1 = 1
an = a(n−1) + 2 * a(n−2) + 3 dla n > 1.
Dodatkowo zaimplementuj rozwiązania rekurencyjne i optymalne rozwiązanie rekurencyjne, które obliczy n-ty wyraz tego ciągu.*/

typedef unsigned int uint;

int f_rec(uint n) {
    return (n == 0 || n == 1) ? 1 : f_rec(n - 1) + 2 * f_rec(n - 2) + 3;
}

int f_tail_rec(uint a, uint b, uint n) { // 1, 1, 5
    return n == 1 ? b : f_tail_rec(b, b + 2 * a + 3, n - 1);
}

int f_it(uint n) {
    int a,b,c;
    a = b = 1;
    while(n-- >= 1) {
        c = b + 2 * a + 3;
        a = b;
        b = c;
    }
    return a;
}