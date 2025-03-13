/*Napisz funkcję, która przyjmuje w argumencie liczbę całkowitą (bez znaku, mniejszą niż 65536) w postaci napisu. Funkcja ma dokonać konwersji tego napisu do liczby całkowitej i zwrócić jej wartość. Zademonstruj użycie tej funkcji w funkcji głównej.

PRZYKŁAD:
IN: "1234"
OUT: 1234
*/

#include <iostream>


unsigned int stringToUint(const char str[]) {
    unsigned int result = 0;

    for(int i = 0;str[i]; ++i) 
        result = result * 10 + (str[i] - '0');
    
    return result;
}

int main() {
 char str[] = "1234";
 unsigned int number = stringToUint(str);
 std::cout << number << std::endl;
 return 0;
}
