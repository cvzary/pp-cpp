//Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą. Następnie program powinien inkrementować tą zmienną
// i do momentu dopóki będzie mniejsza niż 10 wyświetlać komunikat Za mało!. PETLA WHILE

#include <iostream>

int main() {
    int value;
    std::cin >> value;
    while(value < 10) {
        std::cout << "Za malo!" << std::endl;
        value++;
    }
    
    return 0;
}