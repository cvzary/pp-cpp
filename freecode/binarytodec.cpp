/*Napisz funkcję w języku C++, która przyjmuje w argumencie napis będący liczbą binarną i wyświetla jej wartość dziesiętną.*/
#include <iostream>
#include <cmath>

int my_strlen(const char *str) {
    int len = 0;
    for(;str[len];++len);
    return len;
}

int binaryToDecimal(const char *binaryString) {
    int decimalValue = 0;
    int length = my_strlen(binaryString);
    for(int i = 0; i < length; ++i )
        if(binaryString[i] == '1')
            decimalValue = decimalValue + std::pow(2, (length-1-i)); //decimalValue = decimalValue + (1 << (length - 1 - i));
    return decimalValue;
}

int main() {
    const char *binaryString = "11111111";
    std::cout << binaryToDecimal(binaryString) << std::endl;
    return 0;
}