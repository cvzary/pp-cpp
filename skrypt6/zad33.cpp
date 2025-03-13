/*Napisz program w języku C++, który odwróci kolejność znaków w napisie.
*/
#include <iostream>

void my_swap(char& a, char& b) {
    char tmp = a;
    a = b;
    b = tmp;
}

int my_strlen(const char str[]) {
    int len = 0;
    for(;str[len]; ++len);
    return len;
}

void reverse_str(char str[]) {
    unsigned int p = 0, q = my_strlen(str) - 1;
    while(p < q) my_swap(str[p++], str[q--]);
    }


int main() {
    char str[100] = "Ala ma kota";
    std::cout << str << std::endl;
    reverse_str(str);
    std::cout << str << std::endl;
    return 0;
}