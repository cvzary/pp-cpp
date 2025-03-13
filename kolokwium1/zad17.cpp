#include <iostream>
#include <cmath> // Do sqrt()

// Funkcja oblicza indeks najbliższego nadajnika w zasięgu
int findTransmitter(int n, const double x[], const double y[], const double z[], double r, double px, double py) {
    int closestIndex = -1;    // Indeks najbliższego nadajnika (lub -1 jeśli brak)
    double minDistance = r;   // Minimalna odległość w zasięgu (inicjalizowana promieniem r)

    for (int i = 0; i < n; ++i) {
        // Obliczanie odległości Euklidesowej od nadajnika
        double distance = std::sqrt(std::pow(px - x[i], 2) + std::pow(py - y[i], 2) + std::pow(z[i], 2));

        // Sprawdzenie, czy nadajnik jest w zasięgu i bliższy od poprzednio znalezionego
        if (distance <= r && (closestIndex == -1 || distance < minDistance)) {
            closestIndex = i;  // Zapisanie indeksu nadajnika
            minDistance = distance;
        }
    }

    return closestIndex; // Zwraca indeks najbliższego nadajnika lub -1
}

int main() {
    // Dane wejściowe
    int n = 6;
    double x[] = {2, 2, 3, 5, 6, 8};
    double y[] = {2, 6, 3, 7, 1, 6};
    double z[] = {2, 1, 1.5, 2, 2, 2};
    double r = 2.5;  // Promień zasięgu nadajników
    double px = 7;   // Pozycja osoby z odbiornikiem (x)
    double py = 2;   // Pozycja osoby z odbiornikiem (y)

    // Wywołanie funkcji
    int result = findTransmitter(n, x, y, z, r, px, py);

    // Wyświetlenie wyniku
    if (result != -1) {
        std::cout << "Najbliższy nadajnik znajduje się pod indeksem: " << result << std::endl;
    } else {
        std::cout << "Brak nadajnika w zasięgu." << std::endl;
    }

    return 0;
}