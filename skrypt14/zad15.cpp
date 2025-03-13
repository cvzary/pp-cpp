/*
W języku C++ zdefiniuj strukturę City opisującą miasto i zawierającą składowe: nazwa miasta (c-string, maksymalnie 30 znaków), 
ilość mieszkańców (uint), dwie współrzędne geograficzne (2x double). Zdefiniowany jest plik tekstowy typu csv 
zawierający listę takich miast. W programie głównym wczytaj z tego pliku dane i stwórz na ich podstawie tablicę obiektów typu City.
Przykładowy plik cities.csv:
nazwa_miasta,ilosc_mieszkancow,dlugosc_geogr,szerokosc_geogr
Lublin,340000,51.253305,22.559572
Warszawa,1790658,52.250691,21.016754
Stalowa_Wola,60179,50.581978,22.054380
*/

#include <cstdio>
#include <cstring>
#include <cstdlib>

struct City {
    char name[31];
    unsigned int population;
    double latitude;
    double longitude;
};

void loadCitiesFromCSV(const char *filename, City *cities, size_t &count) {
    FILE *file = fopen(filename, "r");
    if(file == nullptr) {
        perror("blad");
        return;
    }

    char buffer[256];
    fgets(buffer, sizeof(buffer), file);

    count = 0;
    while(fgets(buffer, sizeof(buffer), file)) {
        City city;
        char *token = strtok(buffer, ",");
        strncpy(city.name, token, 30);
        token = strtok(nullptr, ",");
        city.population = atoi(token);
        token = strtok(nullptr, ",");
        city.latitude = atof(token);
        token = strtok(nullptr, ",");
        city.longitude = atof(token);
        cities[count++] = city;
    }
    fclose(file);    
}

int main() {
    City cities[100];
    size_t cityCount;
    loadCitiesFromCSV("cities.csv", cities, cityCount);
    for(size_t i = 0; i < cityCount; i++)
        printf("Miasto: %s, Populacja: %u, Szerokosc geogr.: %.6f, Dlugosc geogr.: %.6f\n", cities[i].name, cities[i].population, cities[i].latitude, cities[i].longitude);
    return 0;
}