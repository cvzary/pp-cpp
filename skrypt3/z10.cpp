//Zmodyfikuj poprzednie zadanie tak, aby wyświetlało dolną i górną granicę części wspólnej przedziału, jeżeli taka istnieje.

#include <iostream>

int main() {

    double a, b, c, d, start, end;
    std::cin >> a >> b >> c >> d;
    if(a <= d && c <= b) {
        start = a > c ? a : c;
        end = b < d ? b : d;
        std::cout << "Przedzialy maja czesc wspolna: [" << start << "," << end << "]" << std::endl; 
    }   else {
        std::cout << "Brak czesci wspolnej" << std::endl;
    }

    return 0;
} 

/*version 2.0
    double a,b,c,d;
    std::cin >> a >> b >> c >> d;
    if(a <= d && c <= b) {
        std::cout << "czesc wspolna : [" << std::max(a,c) << "," << std::min(b,d) << "]" << std::endl;
    }   else {
        std::cout << "Brak czesci wspolnej" << std::endl;
    }

    return 0;
} */