#include <iostream>

int main() {

    float a, b;
    std::cin >> a >> b;
    if(b != 0) {
        std::cout << "Iloraz tych liczb wynosi: " << a / b << std::endl;

    }   else {
        std::cout << "Nie mozna dzielic przez 0!";
    
    }

return 0;

}