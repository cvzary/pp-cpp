//instrukcja wyboru switch. Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą.
// Następnie program powinien wyświetlić:– Monday, gdy użytkownik wprowadził 0,– Tuesday, gdy użytkownik wprowadził 1,– Wednesday, 
//gdy użytkownik wprowadził 2,– Thursday, gdy użytkownik wprowadził 3,– Party dla każdej innej wartości wprowadzonej przez użytkownika.

//version2.0

#include <iostream>

int main() {

    int day;
    std::cin >> day;

    switch (day) {
        case 0:
        std::cout << "Monday";
        break;
        case 1:
        std::cout << "Tuesday";
        break;
        case 2:
        std::cout << "Wednesday";
        break;
        case 3:
        std::cout << "Thursday";
        break;
        default:
        std::cout << "Party";
        break;
    }

    return 0;
}