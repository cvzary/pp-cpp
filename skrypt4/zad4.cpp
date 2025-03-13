//Napisz program w języku C++, który wyświetla informację, czy jest możliwe 
//skonstruowanie trójkąta z krawędzi o długościach wczytanych od użytkownika.
/*
#include <iostream>

void validateTriangle(float a, float b, float c) {
    if(a + b > c && a + c > b && b + c > a) {
        std::cout << "valid" << std::endl;
    }   else {
        std::cout << "not" << std::endl;
    }
}

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    validateTriangle(a,b,c);
    
} */

//version 2

#include <iostream>

bool validateTriangle(float a, float b, float c) {
    return (a + b > c && a + c > b && b + c > a);
}

int main() {
    float a,b,c;
    std::cin >> a >> b >> c;
    std::cout << (validateTriangle(a,b,c) ? "valid" : "not");
    return 0;
}