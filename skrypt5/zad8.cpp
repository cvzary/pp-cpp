/*Napisz funkcję w języku C++, która rekurencyjnie liczy wartość elementów wielomianu Czybyszewa pierwszego rodzaju. 
Zaimplementuj odpowiednie funkcje i program, który sprawdza działanie tych funkcji. Rozwiązanie powinno być rozwiązaniem optymalnym.*/

#include <cstdio>
#include <ctime>

typedef unsigned int uint;



float rec(int k, float x) {
    if(k==0) return 1;
    if(k==1) return x;
    return 2 * x * rec(k-1, x) - rec(k-2, x);
}

float tail_rec(int k, float x, float a, float b) {
    if(k==0) return a;
    return k == 1 ? b : tail_rec(k - 1, x, b, 2 * x * b - a);
}

int main() {
    uint n, result;
    while(scanf("%d", &n) == 1) {
        result = rec(n, 2.f);
        printf("rec:  %u\n", result);
    
    result = tail_rec(n, 2.f, 1.f, 2.f);
        printf("tail_rec: %u\n", result);
    }
    return 0;
}