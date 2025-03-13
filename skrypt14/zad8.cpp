/*
Napisz funkcje w języku C++, która przyjmuje ścieżkę do pliku tekstowego oraz 5-cio literowe słowo wczytane od użytkownika. 
Funkcja powinna znaleźć w pliku ***** i zamienić ten ciąg gwiazdek na słowo wczytane od użytkownika. Np. Ala ma *****. -> Ala ma rybke.
*/

#include <cstdio>
#include <cstring>

void replaceAsterisks(const char *filename, const char *word) {
    FILE *file = NULL;
    char buffer[256];

    if((file = fopen(filename, "r+")) == NULL) {
        perror("blad");
        return;
    } else {
        while(fgets(buffer, sizeof(buffer), file)) {
            char *pos = strstr(buffer, "*****");
            if(pos != NULL) {
                long offset = ftell(file) - strlen(buffer) + (pos - buffer);
                fseek(file, offset, SEEK_SET);
                fprintf(file, "%s", word);
                fseek(file, offset + strlen(word), SEEK_SET);
            }
        }
        fclose(file);
    }
}
int main() {
    const char *filePath = "tekst.txt";
    char word[6] = "rybke";
    replaceAsterisks(filePath, word);
    return 0;
}