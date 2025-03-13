/*Napisz program w języku C++, który porówna dwa napisy i wypisze liczbę całkowitą: (1) równą zero, jeżeli oba napisy są identyczne lub 
(2) mniejszą od zera, jeżeli napis pierwszy jest wcześniej alfabetycznie niż napis drugi lub (3) większą od zera, jeżeli napis pierwszy 
jest później alfabetycznie niż napis drugi. Jest to ekwiwalent funkcji bibliotecznej strcmp().*/

#include <iostream>
int my_strcmp(char str_0[], char str_1[]) {
    unsigned int i = 0;
    while (str_0[i] && (str_0[i] == str_1[i])) ++i;
    return str_0[i] - str_1[i];
}
int main() {
    char str_0[100] = "Dlugosc napisu.", str_1[100] = {}; 
    std::cout << my_strcmp(str_0, str_1) << std::endl;
    return 0;
}