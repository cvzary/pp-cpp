/*Napisz program w języku C++, który pobierze od użytkownika 6 liczb zmiennoprzecinkowych będących współrzędnymi (x, y) 
trzech punktów na płaszczyźnie. Jeżeli leżą one na jednej prostej, program powinien wyświetlić współczynniki a, b równania tej prostej 
w postaci y = ax + b. W przeciwnym razie program powinien wyświetlić komunikat "niewspółliniowe". */

#include <iostream>
int main() {
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    double d = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
    if (d == 0) {
        double a = (y2 - y1) / (x2 - x1);
        double b = y1 - a * x1;
        std::cout << "y = " << a << " x + " << b << "\n";
    } else std::cout << "niewspółliniowe\n";
    
    return 0;
}