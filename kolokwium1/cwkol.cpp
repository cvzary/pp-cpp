/*Mamy linię łamaną zdefiniowaną za pomocą punktów o współrzędnych  [x,y]
Postać chce przejść po tej linii od lewej do prawej. Może to zrobić pod warunkiem, że:
Nie wchodzi pod górę z kątem nachylenia większym niż 45°.
Przechodzi przez wszystkie punkty, aż do końca.*/

#include <iostream>

bool canPass(int y[], int size) {
    // Iteracja przez kolejne punkty
    for (int i = 1; i < size; ++i) {
        int deltaX = 1;                   // Odległość między punktami w osi x (zawsze 1)
        int deltaY = y[i] - y[i - 1];     // Różnica wysokości między kolejnymi punktami

        // Sprawdzenie, czy nachylenie jest większe niż 45 stopni
        if (deltaY > deltaX) {
            return false; // Nie można przejść, jeśli nachylenie jest zbyt duże
        }
    }
    return true; // Można przejść przez wszystkie punkty
}

int main() {
    // Definicja tablicy y
    int y[] = {1, 1, 2, 3, 2, 6, 3, 2}; // Punkty definiujące linię łamaną
    int size = sizeof(y) / sizeof(y[0]); // Obliczenie liczby elementów w tablicy

    // Wywołanie funkcji i wyświetlenie wyniku
    if (canPass(y, size)) {
        std::cout << "Postać może przejść!" << std::endl;
    } else {
        std::cout << "Postać nie może przejść!" << std::endl;
    }

    return 0;
} 