/*
Zdefiniuj funkcje conv(), ktora wykona operacje konwolucji dwoch zmiennoprzecinkowych tablic liczbowych f i g o dlugosci m kazda i zwroci
tablice wynikowa. Operacja konwolucji dla dwoch rownolicznych ciagow liczbowych f i g tworzy ciag c, rowniez o dlugosci m, a kazdy
jego i-ty element jest zdefiniowany jako: c(i) = (m-1)suma(j=0) = f(j) *  g(i - j)
W sytuacji gdy wyrazenie wymaga elementu lezacego poza tablica, podstawiamy wartosc 0 za ten element. W funkcji glownej zademonstruj
dzialanie tej funkcji, wypisz wynikowa tablice na standardowym wyjsciu.

IN : f = [2.0, 4.0, 1.0, -3.0]
     g = [-4.0, 3.0, -1.0, 2.0]
OUT : c = [-8.0, -10.0, 6.0, 15.0]

*/

#include <iostream>

const int m = 4;

void conv(const float f[m], const float g[m], float c[m]) {
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < m; ++j)
            if(i - j >= 0)    
                c[i] += f[j] * g[i - j];
}

int main() {
    float f[m] = {2.0f, 4.0f, 1.0f, -3.0f}, g[m] = {-4.0f, 3.0f, -1.0f, 2.0f}, c[m] = {};
    conv(f,g,c);
    for(int i = 0; i < m; ++i)
        std::cout << c[i] << " ";
    std::cout << std::endl;
    
    return 0;
}