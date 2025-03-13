/*
Napisz program w języku C++, który wczyta od użytkownika liczbę, jako napis. Liczba powinna mieć co najwyżej 10 cyfr.
Następnie program powinien zwiększyć tą liczbę o 10 i ją wyświetlić.
*/

#include <cstdio>
#include <cstring>
#include <iostream>

int main() {
    char str[11] = {0}, *ptr = nullptr;
    scanf("%10s", str);
    int value = strtol(str, &ptr, 10) + 10;
    std::cout << std::to_string(value) << std::endl;
    return 0;
}