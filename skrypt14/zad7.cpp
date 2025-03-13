/*
Napisz funkcję w języku C++, która przyjmuje ścieżkę do pliku tekstowego. 
W pliku tekstowym znajdują się posortowane rosnąco liczby całkowite oddzielone pojedynczymi spacjami. 
Funkcja powinna wstawić dodatkowe 5 losowych liczb z przedziału domkniętego, gdzie min to minimalna wartość w pliku, 
zaś max maksymalna. Wstawiane liczby nie powinny zachwiać kolejności liczb całkowitych w pliku. 
Tym samym nowe liczby powinny być wprowadzone w odpowiednie miejsce tak, aby wszystkie liczby w pliku dalej były posortowane rosnąco.
*/

#include <cstdio>
#include <cstdlib>
#include <ctime>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

void insertRandomNumbers(const char *filename) {
    int *numbers = nullptr, count = 0, tmp, min, max;
    FILE *file = nullptr;

    if((file = fopen(filename, "r+")) == nullptr) {
        perror("blad!");
        return;
    } else {
        while(fscanf(file, "%d", &tmp) == 1) ++count;
        rewind(file);
        numbers = new int[count + 5];
        int i = 0;
        while(fscanf(file, "%d", &tmp) == 1) numbers[i++] = tmp;
        min = numbers[0];
        max = numbers[count - 1];

        for(int i = 0; i < 5; ++i) numbers[count++] = min + rand() % (max - min + 1);
        qsort(numbers, count, sizeof(numbers[0]), compare);

        fseek(file, 0, SEEK_SET);
        for(int i = 0; i < count; ++i) fprintf(file, "%d ", numbers[i]);
        fclose(file);
        delete[] numbers;
    }
}

int main() {
    srand(time(0));
    insertRandomNumbers("liczby.txt");
    return 0;
}