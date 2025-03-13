/*Napisz funkcję w języku C++, która przyjmuje w argumencie napis będący liczbą binarną i wyświetla jej wartość dziesiętną.*/

#include <iostream>

int myStrlen(const char *str) {
    int len = 0;
    for(;str[len];++len);
    return len;
}

int convertBinaryToDecimal(const char *binaryString) {
    int decimalValue = 0;
    for(int i = 0; i < myStrlen(binaryString); ++i)
        decimalValue = decimalValue * 2 + (binaryString[i] - '0');
    return decimalValue;
}

int main() {
    const char *binaryString = "1010";
    std::cout << convertBinaryToDecimal(binaryString);
    return 0;
}