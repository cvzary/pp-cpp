//Napisz program w języku C++, który wczytuje od użytkownika
//dwie liczby zmiennoprzecinkowe podwójnej precyzji a i b. 
//Program powinien wyświetlić te liczby, w następującym formacie a = wartosc_a 
//oraz w kolejnej linii b = wartosc_b. Następnie zamienić wartościami te liczby
// i ponownie je wyświetlić w tym samym formacie. (tzw. funkcja swap)

//Version 2.0

#include <cstdio>

int main() {
    double a, b, temp;

    scanf("%lf%lf", &a, &b);
    printf("a = %lf\nb = %lf\n", a, b);

    temp = a;
    a = b;
    b = a;

    printf("a = %lf\nb = %lf", a, b);

    return 0;
}