#include <iostream>
int main() {
int a, b;
std::cout << "Prosze podac dwie liczby calkowite: ";


    if (!(std::cin >> a >> b)) {
std::cout << "Wprowadzono nieprawidłowe dane!" << std::endl;
}
    else {
        std::cout << a << " + " << b << " = " << a + b << std::endl;
    }

return 0;
}