/*
Napisz funkcję w języku C++, która przyjmuje ścieżkę do pliku tekstowego. 
W pliku tekstowym znajdują się posortowane rosnąco liczby całkowite oddzielone pojedynczymi spacjami. 
Funkcja powinna wczytać te liczby do tablicy i znaleźć w nich wartość minimalną i maksymalną.
*/

#include <cstdio>

int find_min(int *arr, int n) {
    int result = arr[0];
    for(int i = 1; i < n; ++i)
        if(arr[i] < result)
            result = arr[i];
    return result;
}

int find_max(int *arr, int n) {
    int result = arr[0];
    for(int i = 1; i < n; ++i)
        if(arr[i] > result)
            result = arr[i];
    return result;
}

void min_max_value(const char *filename) {
    int *arr = nullptr, i = 0, count = 0, tmp, min, max;
    FILE *in;
    if((in = fopen(filename, "rt")) == NULL) {
        printf("blad!\n");
    } else {
        while(fscanf(in, "%d ", &tmp) != EOF) count++;
        arr = new int[count];
        fseek(in, 0, SEEK_SET);
        while(fscanf(in, "%d ", &tmp) != EOF) arr[i++] = tmp;
        fclose(in);
    }

    printf("%d %d\n", arr[0], arr[count - 1]);
    min = find_min(arr,count);
    max = find_max(arr,count);
    printf("%d %d", min, max);
    delete[] arr;
}

int main() {
    min_max_value("result.bin");
    return 0;
}