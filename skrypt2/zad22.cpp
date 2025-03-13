//Napisz program w języku C++, który pobierze ze standardowego wejścia dwie liczby całkowite. 
//Program powinien wyświetlić informację czy są one równe.


#include <iostream>

int main() {

    int a, b;
    std::cin >> a >> b;

    if(a==b) {
        std::cout << "rowne";
    }   else {                                          // zamiast tych linijek=std::cout << (a == b ? "Równe." : "Nierówne.") << std::endl;
        std::cout << "nierowne";
    }
    return 0;
}