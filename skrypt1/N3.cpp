#include <iostream>

int main() {

    int a, b, c;

    std::cin >> a >> b >> c;

    if(b > a && b < c) {
        std::cout << "Liczba b jest wieksza od a, ale mniejsza od c";

    } else {
        std::cout << "Warunek nie zostal spelniony";
    }

return 0;
}