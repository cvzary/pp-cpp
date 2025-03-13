/*Zaprojektuj i zdefiniuj funkcję dyadic(), która oblicza i zwraca iloczyn diadyczny dwóch wektorów 3-elementowych przekazanych w 
argumentach. Do reprezentacji wektorów i macierzy użyj tablic automatycznych. W funkcji głównej pokaż użycie tej funkcji. 
Iloczyn diadyczny dwóch wektorów n-wymiarowych daje w wyniku macierz nxn-wymiarową (zob. https://pl.wikipedia.org/wiki/Iloczyn_diadyczny)*/

#include <iostream>

// Funkcja obliczająca iloczyn diadyczny dwóch wektorów 3-elementowych
void dyadic(const float vec1[3], const float vec2[3], float result[3][3]) {
    for (int i = 0; i < 3; ++i) {          // Iteracja po wierszach macierzy
        for (int j = 0; j < 3; ++j) {      // Iteracja po kolumnach macierzy
            result[i][j] = vec1[i] * vec2[j]; // Iloczyn odpowiednich elementów
        }
    }
}

int main() {
    // Deklaracja dwóch wektorów 3-elementowych
    float vec1[3], vec2[3];
    float result[3][3]; // Macierz wynikowa 3x3

    // Wczytanie pierwszego wektora
    std::cout << "Podaj 3 elementy pierwszego wektora: ";
    for (int i = 0; i < 3; ++i) {
        std::cin >> vec1[i];
    }

    // Wczytanie drugiego wektora
    std::cout << "Podaj 3 elementy drugiego wektora: ";
    for (int i = 0; i < 3; ++i) {
        std::cin >> vec2[i];
    }

    // Wywołanie funkcji obliczającej iloczyn diadyczny
    dyadic(vec1, vec2, result);

    // Wyświetlenie macierzy wynikowej
    std::cout << "Macierz wynikowa (iloczyn diadyczny):" << std::endl;
    for (int i = 0; i < 3; ++i) {          // Iteracja po wierszach
        for (int j = 0; j < 3; ++j) {      // Iteracja po kolumnach
            std::cout << result[i][j] << " "; // Wypisanie wartości
        }
        std::cout << std::endl;            // Nowa linia po każdym wierszu
    }

    return 0;
}