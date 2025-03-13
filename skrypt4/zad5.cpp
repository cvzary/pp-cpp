//Napisz program w języku C++, który obliczy największy wspólny dzielnik i najmniejszą wspólną wielokrotność. 
//Stwórz do tego dwie odpowiednie funkcje.

#include <iostream>

int gcd(int x, int y) {
    int temp;
    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
        return x;
}

int lcm(int x, int y) {
    return x * y / gcd(x,y);
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << "gcd = " << gcd(x,y) << "\tlcm = " << lcm(x,y) << std::endl;

    return 0;
}