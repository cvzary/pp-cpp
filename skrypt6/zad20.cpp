/*Zmodyfikuj poprzednie zadanie tak, aby pierwszy znak w każdym słowie, jeżeli jest literą, został wyświetlony z użyciem wielkiej litery.*/

/*Napisz program w języku C++, który napis w tablicy znaków wyświetli w taki sposób, że każde słowo 
(ciąg znaków oddzielony spacją) będzie wyświetlone w nowej linii.*/

#include <iostream>

int main() {
    char str[] = "Ala ma kota";

    for(int i = 0; str[i]; ++i)
        if(str[i] == ' ')  { 
            std::cout << std::endl;
            if(str[i + 1] >= 'a' && str[i + 1] <= 'z') str[i + 1] -= 32;
            }
        else std::cout << str[i];

    return 0; 
}