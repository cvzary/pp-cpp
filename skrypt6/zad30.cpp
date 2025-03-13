/*Napisz program w języku C++, który wyszuka pierwsze wystąpienie podciągu w napisie, tzn. wyszukuje jeden napis wewnątrz innego napisu i 
wypisze liczbę całkowitą równą pozycji pierwszego znaku w napisie, w którym zaczyna się podciąg lub wartość (-1) jeżeli takiego podciągu 
nie ma. Jest to ekwiwalent funkcji bibliotecznej strstr(). */
#include <iostream>
unsigned int my_strlen(const char str[]) {
    unsigned int result = 0;
    for(;str[result];++result);
    return result;
}
int str_str(char text[], char pat[]) {
    unsigned int m = my_strlen(pat);
    for(unsigned int i=0; text[i]; ++i)
        for(unsigned int j=0; pat[j]; ++j) {
            if(text[i + j] != pat[j])
                break;
            if(m - 1 == j)
                return i;
        }
    return -1;
}
int main() {
    char pattern[] = "ma", text[] = "alamakota"; 
    std::cout << str_str(text, pattern) << std::endl;
    return 0;
}