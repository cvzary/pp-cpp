/*Napisz funkcję w języku C++, która przyjmuje jako argumenty napis będący liczbą binarną, liczbę całkowitą bez znaku. 
W rezultacie funkcja powinna zwrócić sumę liczb całkowitych podanych w pierwszym i drugim argumencie. 
Zaimplementuj odpowiednie funkcję oraz program, który przetestuje ich działanie. */

#include <iostream>

using namespace std;

unsigned int bit_to_int_it(char str[]) {
    unsigned int num = 0;
    for(int i = 0; str[i]; ++i)
        num = (num << 1) | str[i] - '0';
    return num;
}

int f(char value1[], unsigned int value2) {
    return bit_to_int_it(value1) + value2;
}

int main() {
    char str[] = "1111011"; //char str[8] = {'1', '1', '1', '1', '0', '1', '1', '\0'};
    cout << f(str, 123) << endl;
    return 0;
}