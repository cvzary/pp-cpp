/*Napisz program w języku C++, który zmieni wszystkie małe litery wczytanego napisu na wielkie. 
Załóż, że napis nie może mieć więcej niż 100 znaków.*/

#include <iostream>

int main() {
    char str[101];
    std::cout << "podaj napis" << std::endl;
    std::cin >> str;

    for(int i = 0; str[i]; ++i)
        if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] + 'A' - 'a';

    std::cout << str;
    return 0;
}