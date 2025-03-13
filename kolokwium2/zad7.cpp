// Napisz funkcję, która przyjmuje dwie równoliczne dynamiczne tablice wskaźników na napisy (c-string). 
// W pierwszej tablicy, w każdym napisie zapisana jest tablica rejestracyjna, która została przechwycona przez fotoradar. 
// Zakładamy że każda tablica rejestracyjna rozpoczyna się od dwóch lub trzech liter wskazujących miejscowość rejestracji,
// a następnie biały znak oraz ciąg cyfr (długość ciągu to 4 lub 5 cyfr). Należy pomóc jednostce policji w pogrupowaniu rejestracji 
// według miejscowości, aby odpowiednio rozesłać poszczególnym jednostkom numery rejestracji wskazane do wystawienia mandatu. 
// Funkcja powinna zapisać do drugiej tablicy napisy, które są połączeniem tablic rejestracyjnych dla konkretnego województwa 
// (zobacz przykład). 
// Funkcja ma zwrócić liczbę napisów w wyjściowej tablicy. Kolejność województw i rejestracji pojazdów w tablicy wynikowej nie ma znaczenia.
// Napisz program testujący zaimplementowaną funkcję.
// 
//IN:
// 
// “LRY 1234”,
// “LU 87654”,
// “WA 1234”,
// “LRY 888”,
// “LU 999”
// 
// OUT:
// 
// “LRY 1234 888”,
// “LU 87654 999”,
// “WA 1234”


#include <iostream>
#include <cstring>

// Funkcja do grupowania rejestracji według miejscowości
int grupujRejestracje(char** tablicaRejestracji, int n, char**& tablicaWynikowa) {
    // Tablica pomocnicza do przechowywania już odwiedzonych województw
    char* wojewodztwa[n];
    int wojewodztwaCount = 0;

    // Liczba rejestracji w wynikowej tablicy
    int wynikSize = 0;

    // Grupowanie rejestracji
    for (int i = 0; i < n; ++i) {
        // Sprawdzamy, czy już przetwarzaliśmy to województwo
        bool znaleziono = false;
        char* wojewodztwo = strtok(tablicaRejestracji[i], " "); // Pobranie województwa (pierwsze litery)

        // Szukamy tego województwa w tablicy województw
        for (int j = 0; j < wojewodztwaCount; ++j) {
            if (strcmp(wojewodztwa[j], wojewodztwo) == 0) {
                znaleziono = true;
                break;
            }
        }

        // Jeśli nie znaleziono, dodajemy nowe województwo i tworzymy jego połączenie
        if (!znaleziono) {
            wojewodztwa[wojewodztwaCount++] = wojewodztwo;
            char* rejestracje[n];
            int rejestracjeCount = 0;

            // Przechodzimy przez wszystkie rejestracje, dodajemy te należące do tego województwa
            for (int j = 0; j < n; ++j) {
                char* currentWojewodztwo = strtok(tablicaRejestracji[j], " ");
                if (strcmp(wojewodztwo, currentWojewodztwo) == 0) {
                    rejestracje[rejestracjeCount++] = tablicaRejestracji[j];
                }
            }

            // Tworzymy nową tablicę rejestracji dla tego województwa
            char* połączenie = new char[100];
            połączenie[0] = '\0';
            for (int k = 0; k < rejestracjeCount; ++k) {
                if (k != 0) {
                    strcat(połączenie, " ");  // Oddzielamy rejestracje spacją
                }
                strcat(połączenie, rejestracje[k] + 4); // Dodajemy numery rejestracyjne (po białym znaku)
            }

            // Dodajemy do wynikowej tablicy
            tablicaWynikowa[wynikSize++] = połączenie;
        }
    }

    return wynikSize;
}

int main() {
    // Testowanie funkcji
    const int n = 5;
    char* tablicaRejestracji[n] = {
        "LRY 1234",
        "LU 87654",
        "WA 1234",
        "LRY 888",
        "LU 999"
    };

    char* tablicaWynikowa[n];  // Wynikowa tablica rejestracji

    int wynikSize = grupujRejestracje(tablicaRejestracji, n, tablicaWynikowa);

    // Wyświetlanie wyników
    for (int i = 0; i < wynikSize; ++i) {
        std::cout << tablicaWynikowa[i] << std::endl;
        delete[] tablicaWynikowa[i]; // Zwolnienie pamięci
    }

    return 0;
}
