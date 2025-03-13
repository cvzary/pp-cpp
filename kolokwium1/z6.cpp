/*Napisz funkcję, która przyjmuje w parametrze x > 0 i wyznacza przybliżoną wartość funkcji wykładniczej e^x.
Zakładamy, że nie jest znana wartość liczby e. Skorzystaj z rozwinięcia funkcji eksponent w szereg zgodnie z wyrażeniem:
e^x = sum_{n=0} (x^n)/(n!) = 1 + x + x^2/(2!) + x^3/(3!) + ...
Sumę wyznacz dla elementów 0 <= n < 20. W ciele tej funkcji nie wolno używać żadnych funkcji z biblioteki matematycznej.
W funkcji głównej pobierz od użytkownika wartość liczby x i wyświetl na ekranie oszacowaną wartość e^x.
Poprawność własnej implementacji można sprawdzić porównując z wynikiem funkcji bibliotecznej std::exp().
IN: 5
OUT: 148.413*/
#include <iostream>

float e_to_x(float x) 
    {
        float e = 1.0;
        float px = 1.0;
        float fi = 1.0;
        for(int i=1; i < 20; i++) 
        {
            // e += x^1 / (i!);
            px *= x;
            fi *= i;
            e += px / fi;
        }
        return e;
    }

int main() {
    float x = 5.0f;
    float ex = e_to_x(x);
    std::cout << ex;
    return 0;
}