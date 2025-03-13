/*
Dla struktury City opracuj binarny format pliku do przechowywania danych o miastach.
W języku C++ napisz funkcje do zapisu i odczytu tablicy z miastami z tak zdefiniowanego pliku binarnego.
*/

#include <cstdio>
#include <cstring>
struct City {
    char name[31];
    unsigned int population;
    double latitude;
    double longitude;
};
void writeCitiesToBinary(const char* filename, City* cities, size_t count) {
    FILE* file = fopen(filename, "wb");
    if (file == nullptr) {
        perror("Nie można otworzyć pliku do zapisu!");
        return;
    }
    fwrite(cities, sizeof(City), count, file);
    fclose(file);
}
size_t readCitiesFromBinary(const char* filename, City* cities, size_t max_count) {
    FILE* file = fopen(filename, "rb");
    if (file == nullptr) {
        perror("Nie można otworzyć pliku do odczytu!");
        return 0;
    }
    size_t elementsRead = fread(cities, sizeof(City), max_count, file);
    fclose(file);
    return elementsRead;
}
int main() {
    size_t cityCount = 3;
    const char* filename = "cities.bin";
    City cities[cityCount] = {
        {"Lublin", 340000, 51.253305, 22.559572},
        {"Warszawa", 1790658, 52.250691, 21.016754},
        {"Stalowa_Wola", 60179, 50.581978, 22.054380}
    };
    writeCitiesToBinary(filename, cities, cityCount);
    City loadedCities[cityCount];
    size_t loadedCount = readCitiesFromBinary(filename, loadedCities, cityCount);
    for (size_t i = 0; i < loadedCount; i++)
        printf("Miasto: %s, Populacja: %u, Szerokość geogr.: %.6f, Długość geogr.: %.6f\n",
               loadedCities[i].name, loadedCities[i].population,
               loadedCities[i].latitude, loadedCities[i].longitude);
    return 0;
}