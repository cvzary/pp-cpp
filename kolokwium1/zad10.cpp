/*Zdefiniuj funkcję, która przyjmuje jako argumenty: napis str oraz automatyczną tablicę liczb całkowitych bez znaku occ o długości równej
ilości znaków w napisie str. Funkcja powinna w i-ty element tablicy occ wpisać liczbę wystąpień (w całym napisie str) i-tego znaku z tego
napisu. Napis str może zawierać jedynie małe i wielkie litery oraz spacje. Małe i wielkie litery zliczamy łącznie, jako ten sam znak.
PRZYKŁAD:
IN str = “Ala ma kota”
OUT occ = [4, 1, 4, 2, 1, 4, 2, 1, 1, 1, 4]*/
#include <iostream>

void count_occurences(char str[], unsigned int occ[]) {

    for(int i = 0; str[i]; ++i) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
    }

    for(int i = 0; str[i]; ++i) {
        occ[i] = 0;
        char current = str[i];

        for(int j = 0; str[j]; ++j) {
            char compare = str[j];
        if(current == compare)
            ++occ[i];
        }
    }
}

int main() {
    char str[] = "Ala ma kota";
    unsigned int occ[sizeof(str)/sizeof(str[0])] = {};

    count_occurences(str,occ);
    for(int i = 0; str[i]; ++i)
        std::cout << occ[i] << " ";
    return 0;
}