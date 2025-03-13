/*
napisz funkcje bin2dec() ktora przyjmie liczbe w zapisie binarnym i zamieni ja na 1-bajtowa = 8 bitowa liczbe calkowita bez znaku,
nastepnie funkcje correct() ktora zaneguje 3 bit tej liczb, i zamieni miejscem 4 najmlodsze bity z 4 najstarszymi.
Na koniec program ktory sprawdzi dzialanie.
                                                przyklad ; 0010 0110(38dec) --> 0011 0110(54) --> 0110 0011 (99dec)
*/

#include <iostream>

int str_len(const char str[]) {
    int len = 0;
    for(; str[len]; ++len);
    return len;
}

unsigned char correct(unsigned char decimal) {
    decimal ^= (1 << 4);
    unsigned char lsb = decimal & 0x0F;
    unsigned char msb = decimal & 0xF0;
    decimal = (msb >> 4) | (lsb << 4);
    return decimal;
}

unsigned char bin2dec(const char str[]) {
    int decimal = 0;
    int len = str_len(str);
    for(int i = 0; str[i]; ++i)
        if(str[i] == '1')
            decimal += (1 << (len - i - 1));
    return decimal;
}

int main() {
    char str[] = "00100110";
    unsigned char decimal = bin2dec(str);
    std::cout << (int)decimal << std::endl;
    unsigned char corrected_decimal = correct(decimal);
    std::cout << (int)corrected_decimal << std::endl;
    return 0;
}