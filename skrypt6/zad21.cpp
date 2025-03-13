/*Napisz program w języku C++, który wczyta ze standardowego wejścia zmiennoprzecinkowe parametry a, b równania liniowego. 
Funkcja powinna wyświetlić na standardowym wyjściu fragment kodu SVG, który na obrazie o rozmiarach 1000 x 1000 pikseli narysuje w postaci 
linii osie rzędnych i odciętych krzyżujące się w pikselu (500, 500) oraz linię zadaną równaniem.*/

#include <iostream>
int main() {
    double a, b, x1, x2, y1, y2;
    std::cin >> a >> b;
    x1 = 0;
    y1 = -a * (x1 - 500) - b + 500;
    x2 = 1000;
    y2 = -a * (x2 - 500) - b + 500;
    
    std::cout << 
        "<svg height=\"1000\" width=\"1000\">"
        "\n\t<line x1=\"" << std::to_string(x1) << "\" y1=\"" << std::to_string(y1) << "\" x2=\"" << std::to_string(x2) << "\" y2=\"" << std::to_string(y2) << "\" style=\"stroke:rgb(255,0,0);stroke-width:2\"/>"
        "\n\t<line x1=\"0\" y1=\"500\" x2=\"1000\" y2=\"500\" style=\"stroke:rgb(0,255,0);stroke-width:2\"/>"
        "\n\t<line x1=\"500\" y1=\"0\" x2=\"500\" y2=\"1000\" style=\"stroke:rgb(0,0,255);stroke-width:2\"/>"
        "\n</svg>" << std::endl;
    return 0;
}