// napisz program obliczajacy ile cyfr ma liczba wprowadzona przez uzytkownika.

#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int counter = 1;
    while(number /= 10) counter++;
    std::cout << "wprowadzona liczba sklada sie z: " << counter << " cyfr" << std::endl;
    return 0;
}