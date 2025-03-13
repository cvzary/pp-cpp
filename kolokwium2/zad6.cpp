/*
Ranking gry NewCSShooter przechowywany jest  na serwerze w następujący sposób:
MystiqueHero;1365;6890;15210
Frizz;5400;6200;11000
Każdy wiersz reprezentuje statystyki rozegranych meczy dla danego użytkownika. 
Pojedynczy wiersz zawiera następujące informacje oddzielone od siebie średnikiem: 
nazwa użytkownika, ilość wygranych meczy, ilość rozegranych meczy, ilość dokonanych likwidacji. 


Przykład 

MystiqueHero;1365;6890;15210,
można zinterpretować, że gracz MystiqueHero wygrał 1365 meczy na 6890 wszystkich rozegranych meczy i dokonał 15210 likwidacji.
Zbuduj ranking graczy obliczając ich wynik rankingowy. Napisz funkcję, która przyjmuje dynamiczną tablicę napisów (c-string), 
w której w każdym elemencie przechowywany jest zapis statystyki danego gracza oraz drugą taką tablicę  wyjściową na wyniki. 
Funkcja powinna w drugą tablicę wyjściową wpisać informacje o graczu oraz jego wynik liczony w następujący sposób: wygrane mecze  +
wszystkie mecze + ilość likwidacji. Możesz założyć że nazwa użytkownika to nie więcej niż 12 znaków oraz całkowity wynik to liczba 
całkowita złożona z maksymalnie 10 cyfr. Napisz program testujący zaimplementowaną funkcję.

IN:
[
“MystiqueHero;1365;6890;15210”,
“Frizz;5400;6200;11000”,
“Ziemniak;9965;11000;73000”,
“Evel00na;10;10;90”
]

OUT:
[
“MystiqueHero 23465”, //(bo 1365 + 6890 + 15210 = 23465)
“Frizz 22600”,
“Ziemniak 93965”,
“Evel00na 110”,
]               */

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

// Funkcja do obliczania wyniku gracza
void obliczWynikiGraczy(char graczy[][50], int liczbaGraczy, char wynikiWyjsciowe[][50]) {
    for (int i = 0; i < liczbaGraczy; ++i) {
        char nazwaUzytkownika[13];
        int wygrane, rozegrane, likwidacje;

        // Parsowanie wejściowego ciągu znaków
        sscanf(graczy[i], "%12[^;];%d;%d;%d", nazwaUzytkownika, &wygrane, &rozegrane, &likwidacje);

        // Obliczanie wyniku rankingowego
        int wynik = wygrane + rozegrane + likwidacje;

        // Formatowanie wyniku i zapisanie go w tablicy wyjściowej
        sprintf(wynikiWyjsciowe[i], "%s %d", nazwaUzytkownika, wynik);
    }
}

int main() {
    // Statystyki wejściowe
    char graczy[][50] = {
        "MystiqueHero;1365;6890;15210",
        "Frizz;5400;6200;11000",
        "Ziemniak;9965;11000;73000",
        "Evel00na;10;10;90"
    };

    int liczbaGraczy = sizeof(graczy) / sizeof(graczy[0]);

    // Wyniki wyjściowe
    char wynikiWyjsciowe[liczbaGraczy][50];

    // Obliczanie wyników
    obliczWynikiGraczy(graczy, liczbaGraczy, wynikiWyjsciowe);

    // Wyświetlanie wyników
    for (int i = 0; i < liczbaGraczy; ++i) {
        cout << wynikiWyjsciowe[i] << endl;
    }

    return 0;
}
