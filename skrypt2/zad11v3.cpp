//Version 3.0
    #include <cstdio>
    #include <cmath>
    #include <cfloat>
    int main() {
        float a = 1.0f / 10.0f;
        float b = 1.0f - 0.9f;
        printf("a=%g, b=%g\n", a, b);
        if (fabsf(b - a) < FLT_EPSILON) //pewien epsilon na błąd
            printf("Zgadza sie.\n");
        else
            printf("Nie zgadza sie!\n");
    }