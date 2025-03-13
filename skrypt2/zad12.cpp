//Napisz program w języku C++, który zapamięta wartość dowolnego wyrażenia logicznego, a następnie wyświetli jego wartość logiczną (1 lub 0).

#include <iostream>

int main() {

    bool b1 = false, b2 = true;
    b2 = b2+b1;
    if(b2) {
       std::cout << "Suma zmiennych bool: " << b2 << std::endl;
    } 
    return 0;
}