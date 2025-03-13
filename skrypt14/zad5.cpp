/*
Zaprojektuj strukturę Car, która posiada dwa pola: register_number, będący jednobajtową liczbą całkowitą bez znaku (0 - 255),
brand_name, będąca maksymalnie 15 znakowym napisem. Następnie napisz funkcję w języku C++, 
która przyjmuje tablicę zmiennych typu Car, jej rozmiar oraz stały napis będący nazwą pliku, do którego funkcja
powinna zapisać przekazaną tablicę.
*/

#include <cstdio>
typedef unsigned char uchar;

struct Car{
    uchar register_number;
    char brand_name[15];
};

void f(Car arr[], int n, const char *filename) {
    FILE *out = NULL;
    if((out = fopen(filename, "wb")) == NULL) {
        perror("blad!");
        return;
    } else {
        fwrite(arr,sizeof(Car), n, out);
        fclose(out);
    }
}

void read_cars(const char *filename, int n) {
    FILE *in = fopen(filename, "rb");
    if (!in) {
        perror("Błąd!");
        return;
    }

    Car arr[5];  // Tymczasowa tablica na odczytane dane
    fread(arr, sizeof(Car), n, in);
    fclose(in);

    for (int i = 0; i < n; ++i) {
        printf("Rejestr: %d, Marka: %s\n", arr[i].register_number, arr[i].brand_name);
    }
}

int main() {
    Car arr[5] = {1, "Volvo", 2, "Opel", 3, "BMW", 4, "Tesla", 5, "Fiat"};
    f(arr, 5, "result.bin");
    read_cars("result.bin", 5); 
    return 0;
}