/*Napisz funkcję w języku C++, która przyjmuje w argumencie dodatnią liczbę całkowitą i wyświetla jej binarną reprezentację.*/

#include <iostream>

void display_binary(unsigned int number) {
    if (number == 0) {
        std::cout << "0";  // Obsługuje przypadek, gdy liczba to 0
        return;
    }

    // Tablica do przechowywania wyników w odwrotnej kolejności
    char binary[32];  // Założenie, że liczba nie przekroczy 32 bitów
    int index = 0;

    // Proces dzielenia liczby przez 2 i zapisywania reszt w tablicy
    while (number > 0) {
        binary[index++] = (number % 2) + '0';  // Zapisujemy cyfrę jako znak
        number /= 2;  // Dzielimy liczbę przez 2
    }

    // Wypisujemy bity w odwrotnej kolejności (od ostatniego do pierwszego)
    for (int i = index - 1; i >= 0; --i) {
        std::cout << binary[i];
    }
}

int main() {
    unsigned int num;
    std::cout << "Podaj liczbę całkowitą: ";
    std::cin >> num;

    std::cout << "Reprezentacja binarna liczby " << num << ": ";
    display_binary(num);
    std::cout << std::endl;

    return 0;
}



// void display_binary(unsigned int number) {
//     if(number) display_binary(number/2);
//     std::cout << (number % 2);
// }

// void display_binary_bitwise_op(unsigned int number) {
//     if(number) display_binary_bitwise_op(number >> 1);
//     std::cout << (number & 1);
// }

// int main() {
//     unsigned int num = 10;
//     display_binary(num), std::cout << std::endl;
//     num = 21;
//     display_binary(num), std::cout << std::endl;
//     num = 10;
//     display_binary_bitwise_op(num), std::cout << std::endl;
//     num = 21;
//     display_binary_bitwise_op(num), std::cout << std::endl;
//     return 0;
// }