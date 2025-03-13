/*Napisz odpowiednie funkcje oraz program w języku C++, które umożliwią stworzenie kopii wczytanego od użytkownika napisu i 
sprawdzenie jego rozmiaru. Napis nie może być dłuższy niż 100 znaków. Do zaimplementowania powyższego wykorzystaj arytmetykę wskaźników.*/

#include <cstdio>

int str_len(char *str) {
    int len = 0;
    while(*(str++))
        len++;
    return len;
}

void str_cpy(char *src, char *dst) {
    while((*dst++ = *src++));
}

int main() {
    char str[101], str_tmp[101];
    scanf("%100s", str);

    str_cpy(str,str_tmp);

    printf("%s\n%d\n", str_tmp, str_len(str));
    return 0;
}