// Napisz program w języku C++, który pobierze ze standardowego wejścia 3 liczby zmiennoprzecinkowe – długości boków trójkąta, 
//a następnie wyświetli informację, czy z podanych długości można utworzyć trójkąt.

#include <iostream>

int main() {
    float a,b,c;

    std::cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a) {
        std::cout << "Z podanych bokow mozna utowrzyc trojkat";
    } else {
        std::cout << "Z podanych bokow nie mozna utworzyc trojkata";
    }

    return 0;
}