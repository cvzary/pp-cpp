/*Napisz funkcję w języku C++, która przyjmie jako argumenty dwa napisy – przeszukiwany i poszukiwany. Jeżeli w napisie przeszukiwanym 
znajduje się napis będący zgodny z napisem poszukiwanym, funkcja powinna zwrócić wskaźnik na indeks pierwszego znaku odnalezionego 
pod-napisu. W przeciwnym razie funkcja powinna zwrócić nullptr. Napisz program w języku C++, który przetestuje działanie tej funkcji.*/

#include <iostream>

char *search(char str[], char str1[]) {
    bool found;
    for(int i = 0; str[i]; ++i) {
        found = true;
        for(int j = 0; str1[j] && str[i+j]; ++j)
            if(str1[j] != str[i + j]) {
                found = false;
                break;
            }
        if(found) return str + i;
    }   
    return nullptr;
}

int main() {
    char str[] = "Ala ma kota", str1[] = "kota";
    char *found = search(str,str1);

    if(found) std::cout << found - str << std::endl;
    else std::cout << "not found" << std::endl;

    return 0;
}