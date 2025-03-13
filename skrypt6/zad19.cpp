/*Napisz program w języku C++, który napis w tablicy znaków wyświetli w taki sposób, że każde słowo 
(ciąg znaków oddzielony spacją) będzie wyświetlone w nowej linii.*/

#include <iostream>

int main() {
    char str[] = "Ala ma kota";

    for(int i = 0; str[i]; ++i)
        if(str[i] == ' ') std::cout << std::endl; //printf("\n");
        else std::cout << str[i]; //printf("%c", str[i]);

    return 0; 
}