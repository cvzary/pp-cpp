#include <cstdio>
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
uint fib_tail_rec (uint n, uint a, uint b) {
    ++count;
    if (n == 0) return a;
    if (n == 1) return b;
    return fib_tail_rec(n - 1, b, a + b);
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
        count = 0;
        start = clock();
        result = fib_tail_rec(n, 0 , 1);
        end = clock();
        printf("fib_tail_rec: %u, %u, %f\n", result, count, (float)(end - start) / CLOCKS_PER_SEC);
    }
    return 0;
}