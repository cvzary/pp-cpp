/*Napisz funkcję w języku C++, która przyjmuje napis. Niech funkcja zwróci liczbę słów w tym napisie.*/

#include <iostream>

unsigned int num_of_words(const char str[]) {
    unsigned int count = 0;
    bool is_word = false;

    for(unsigned int i = 0; str[i]; ++i) {
        if(str[i] != ' ' && !is_word) {
            is_word = true;
            count++;
        }   else if (str[i] == ' ') {
            is_word = false;
        }
    }
    return count;
}

int main() {
    char str[100] = "Ala ma kota i rybke.";
    std::cout << num_of_words(str) <<std::endl;
    return 0;
}