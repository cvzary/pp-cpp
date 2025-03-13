//instrukcja wyboru switch. Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą.
// Następnie program powinien wyświetlić:– Monday, gdy użytkownik wprowadził 0,– Tuesday, gdy użytkownik wprowadził 1,– Wednesday, 
//gdy użytkownik wprowadził 2,– Thursday, gdy użytkownik wprowadził 3,– Party dla każdej innej wartości wprowadzonej przez użytkownika.

#include <iostream>

int main() {

    int day;
    std::cin >> day;
    if(day == 0) {
        std::cout << "Monday"; }
    else if(day == 1) {
        std::cout << "Tuesday"; }
    else if(day == 2) {
        std::cout << "Wednesday"; }
    else if(day == 3) {
        std::cout << "Thursday"; }
    else {
        std::cout << "Party"; 
    }

    return 0;
}