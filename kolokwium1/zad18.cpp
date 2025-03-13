#include <iostream>
#include <iomanip> // Do manipulowania wyświetlaniem liczb zmiennoprzecinkowych

void charging_time(double max_capacity, double capacity, double max_charge_efficiency) {
    int time_units = 0;

    // Wypisywanie nagłówka dla lepszej czytelności
    std::cout << std::fixed << std::setprecision(2); // Ustawienie dokładności do dwóch miejsc po przecinku
    std::cout << time_units << " " << capacity << std::endl; // Początkowy stan naładowania

    // Pętla do pełnego naładowania akumulatora
    while (capacity < max_capacity) {
        // Obliczanie aktualnej wydajności ładowania
        double efficiency = max_charge_efficiency * (1 - (capacity / max_capacity) / 2);

        // Dodanie pojemności na danej jednostce czasu
        capacity += efficiency;

        // Jeśli przekroczylibyśmy maksymalną pojemność, ustawiamy ją na max_capacity
        if (capacity > max_capacity) {
            capacity = max_capacity;
        }

        // Inkrementacja liczby jednostek czasu
        time_units++;

        // Wypisywanie stanu akumulatora po każdej jednostce czasu
        std::cout << time_units << " " << capacity << std::endl;
    }
}

int main() {
    // Wczytanie danych od użytkownika
    double max_capacity, capacity, max_charge_efficiency;
    std::cout << "Podaj maksymalną pojemność, aktualny stan naładowania i maksymalną wydajność ładowania: ";
    std::cin >> max_capacity >> capacity >> max_charge_efficiency;

    if (capacity > max_capacity || capacity < 0 || max_capacity <= 0 || max_charge_efficiency <= 0) {
        std::cerr << "Nieprawidłowe dane wejściowe!" << std::endl;
        return 1;
    }

    // Wywołanie funkcji obliczającej czas ładowania
    charging_time(max_capacity, capacity, max_charge_efficiency);

    return 0;
}