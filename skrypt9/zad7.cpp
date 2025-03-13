/*Napisz uniwersalną funkcję swap w języku C++ oraz program, który sprawdzi jej działanie dla różnych typów zmiennych */

#include <iostream>
void my_memcpy(void *dst, void *src, size_t n) {
    char *csrc = (char *)src;
    char *cdst = (char *)dst;
    for(size_t i = 0; i < n; ++i)
        cdst[i] = csrc[i];
}
void my_swap(void *a, void *b, size_t size) {
    char *tmp = new char[size];
    my_memcpy(tmp, b, size);
    my_memcpy(b, a, size);
    my_memcpy(a, tmp, size);
    delete[] tmp;
}
int main() {
    int a = 1, b = 2;
    std::cout << a << " " << b << std::endl;
    my_swap(&a, &b, sizeof(a));
    std::cout << a << " " << b << std::endl;
    return 0;
}