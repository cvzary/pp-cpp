/*Napisz program w języku C++, który zamieni w tablicy znakowej małe litery na duże, duże na małe a pozostałe znaki nie zostaną zmienione.*/

#include <iostream>

void change_str(char str[]) {
    for(unsigned int i = 0; str[i]; ++i)
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
}

int main() {
    char str[100] = "AcK267ab";
    change_str(str);
    std::cout << str << std::endl;
    return 0;
}