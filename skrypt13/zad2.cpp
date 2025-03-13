// Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą. Następnie program powinien wyświetlić:

// Left, gdy użytkownik wprowadził 0;
// Right, gdy użytkownik wprowadził 1;
// Up, gdy użytkownik wprowadził 2;
// Down, gdy użytkownik wprowadził 3;
// Anywhere dla każdej innej wartości wprowadzonej przez użytkownika.

#include <iostream>

enum Direction{LEFT, RIGHT, UP, DOWN};

int main() {
    Direction s;
    int value;
    std::cin >> value;
    s = static_cast<Direction>(value);
    switch(s) {
        case LEFT: std::cout << "Left" << std::endl; break;
        case RIGHT: std::cout << "Right" << std::endl; break;
        case UP: std::cout << "Up" << std::endl; break;
        case DOWN: std::cout << "Down" << std::endl; break;
        default: std::cout << "Anywhere" << std::endl; break;
    }   
    return 0;
}