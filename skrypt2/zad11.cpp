//Version 1.0
#include <cstdio>
int main() {
    float a = 1.0f / 10.0f;
    float b = 1.0f - 0.9f;
    printf("a=%g, b=%g\n", a, b);
    if (a == b) {
        printf("Zgadza sie.\n");
    } else {
        printf("Nie zgadza sie!\n");
    }
}