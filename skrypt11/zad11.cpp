/*
Napisz program w języku C++, który wczyta od użytkownika maksymalnie 100 znakowe słowo. 
Następnie program powinien stworzyć odwrócony odpowiednik napisu wprowadzonego przez użytkownika za pomocą arytmetyki wskaźników.
*/

#include <cstdio>
#define MAX_SIZE 100
int main() {
    char str[MAX_SIZE + 1] = {0}, reverse[MAX_SIZE + 1] = {0};
    char *s = str;
    char *r = reverse;
    scanf("%100s", str);
    int len = 0;
    while(*(s++)) len++;
    s--;
    while(len >= 0) {
        *(r++) = *(--s);
        len--;
    }
    *r = '\0';
    printf("Original: %s\n", str);
    printf("Reverse: %s\n", reverse);
    return 0;
}