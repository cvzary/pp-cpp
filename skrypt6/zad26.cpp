/*Napisz program w języku C++, który dla tablicy znaków wypisuje liczbę całkowitą oznaczającą długość napisu 
(ilość znaków w tym napisie) – ekwiwalent funkcji bibliotecznej strlen().*/

#include <iostream>

unsigned int my_strlen(const char str[]) {
    unsigned int len = 0;
    for(;str[len]; ++len);
    
    return len;
}

int main() {
    const char str[100] = "dlugosc napisu";
    std::cout << my_strlen(str) << std::endl;
    return 0;
}