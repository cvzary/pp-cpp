/*
W języku C++ stwórz funkcję write_array(), która zapisze podaną w argumencie tablicę liczb zmiennoprzecinkowych do pliku 
(nazwa podana w argumencie funkcji) w postaci binarnej (nieformatowanej), gdzie każdy element tablicy jest kodowany na czterech bajtach. 
Stwórz analogiczną funkcję read_array(), która wczyta z takiego pliku (nazwa podana w argumencie funkcji) dane do przekazanej w argumencie 
tablicy liczb zmiennoprzecinkowych. 
Funkcja powinna wczytać nie więcej elementów niż zadeklarowana wielkość tablicy i zwrócić rzeczywistą ilość wczytanych elementów.
*/

#include <cstdio>

void write_array(const char *filename, float *array, size_t size) {
    FILE *file = NULL;
    if((file = fopen(filename, "wb")) == NULL) {
        perror("blad");
        return;
    }
    fwrite(array, sizeof(float), size, file);
    fclose(file);
}

size_t read_array(const char *filename, float *array, size_t max_size) {
    FILE *file = NULL;
    if((file = fopen(filename, "rb")) == NULL) {
        perror("blad");
        return 0;
    }
    size_t elementsRead = fread(array, sizeof(float), max_size, file);
    fclose(file);
    return elementsRead;
}

int main() {
    const char *filename = "data.bin";
    float array[] = {1.5, 2.5, 3.5, 4.5};
    size_t size = 4;

    write_array(filename, array, size);
    float readArray[4];
    size_t elements = read_array(filename, readArray, size);
    for(size_t i = 0; i < elements; i++) printf("%.1f ", readArray[i]);
    printf("\n");
    return 0;
}