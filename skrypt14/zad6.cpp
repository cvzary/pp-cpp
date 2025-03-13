/*
Napisz funkcję w języku C++, która przyjmuje ścieżkę do pliku tekstowego. 
W pliku tekstowym znajdują się liczby całkowite oddzielone pojedynczymi spacjami. 
Funkcja powinna wczytać te liczby zwiększyć o jeden i ponownie zapisać do pliku.
*/

#include <cstdio>

void incrementNumbersInFile(const char *filename) {
    int *numbers = nullptr, count = 0, tmp;
    FILE *in = nullptr, *out = nullptr;
    if((in = fopen(filename, "r")) == nullptr) {
        perror("blad!");
        return;
    } else {
        while(fscanf(in, "%d", &tmp) == 1) count++;
        rewind(in);
        numbers = new int[count];
        int i = 0;
        while(fscanf(in, "%d", &tmp) == 1) numbers[i++] = tmp + 1;
        fclose(in);
    }

    if((out = fopen(filename, "w")) == nullptr) {
        perror("blad!");
        return;
    } else {
        for(int i = 0; i < count; ++i) fprintf(out, "%d ", numbers[i]);
        fclose(out);
    }

    delete[] numbers;
}

int main() {
    const char *filePath = "liczby.txt";
    incrementNumbersInFile(filePath);
    return 0;
}