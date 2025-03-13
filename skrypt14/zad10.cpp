/*
Napisz program w języku C++, który odczyta i wyświetli dane z pliku o następującej strukturze:
Ala ma X kotow w nastepujacym wieku:
DATA
gdzie X to ilość kotów w tablicy DATA. DATA to wartości kolejnych elementów tablicy zapisane binarnie. 
Każdy element tablicy DATA jest reprezentowany za pomocą liczby całkowitej. Program powinien wyświetlić wiek wszystkich kotów.
*/

#include <cstdio>

void readCatData(const char *filename) {
    int age = 0, numCats = 0;
    FILE *file = NULL;
    if((file = fopen(filename, "rb")) == NULL) {
        perror("blad");
        return;
    }

    fscanf(file, "Ala ma %d kotow w nastepujacym wieku:\n", &numCats);
    printf("Ala ma %d kotow w nastepujacym wieku:\n", numCats);

    for(int i = 0; i < numCats; ++i) {
        fread(&age, sizeof(int), 1, file);
        printf("Kot %d: %d lat\n", i + 1, age);
    }
    fclose(file);
}
int main() {
    readCatData("cats_data.bin");
    return 0;
}