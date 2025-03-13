/*
Jesteś inżynierem systemów komputerowych w Międzygalaktycznym Centrum Badawczym. Ostatnio udało się przechwycić sygnał z odległej galaktyki.
Sygnał ten ciągle napływa i musi być na bieżąco przetwarzany. Udało Ci się zidentyfikować, że zawiera interesujące liczby.
Problem polega na tym, że oprócz liczb znajduje się w nim szereg znaków alfanumerycznych stanowiących błędy i szum. Na ten moment wiemy,
że są tam tylko litery (małe i duże), cyfry oraz symbole kropki. Twoim zadaniem jest zaprojektowanie systemu dekodowania tego sygnału i
wyczyszczenia go z nieistotnych danych.

Sygnał został zapisany w postaci c-stringu. Ciąg cyfr obok siebie (opcjonalnie z kropką) traktujemy jak 
pojedynczą liczbę zmiennoprzecinkową, przykładowo w napisie: aBc1.23de.f34k mamy dwie liczby 1.23 i 34.
Zakładamy, że liczby w napisie są poprawnie zapisane, ale nie zawsze muszą mieć kropkę i część dziesiętną.
Kropka może jednak znaleźć się również w każdym innym miejscu.

Napisz program, który obliczy średnią arytmetyczną wszystkich liczb w takim napisie. W tym celu:
1) Zaimplementuj algorytm, który wyszuka wszystkie liczby w podanym c-stringu, skonwertuje je na liczby zmiennoprzecinkowe
i umieści w dedykowanej pomocniczej tablicy numbers.
2) Zakładamy, że nie mamy możliwości określenia z góry ile liczb jest w tym napisie, więc tablica numbers musi być tablicą dynamiczną,
„powiększaną” w miarę potrzeby. W tym celu zdefiniuj pomocniczą funkcję expand(), która bierze wskaźnik na tablicę dynamiczną,
jej rozmiar oraz liczbę określającą o ile powiększyć tę tablicę; funkcja zwraca wskaźnik na nowo zaalokowaną, powiększoną tablicę,
która zawiera wartości z dawnej tablicy.
3) Z elementów tablicy numbers wyznacz średnią arytmetyczną i wyświetl wynik.

Zadbaj o poprawne zarządzanie pamięcią tak aby nie było błędów alokacji i wycieków pamięci.
HINT: Przydatna może być funkcja biblioteczna strtof().

PRZYKŁAD:
IN: "am4.5gr3.1415ld.p1ws92.65p."
// liczby to: 4.5, 3.1415, 1, 92.65
OUT: 25.32

*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

// float *expand(float *arr, int current_size, int increment) {
//     float *new_arr = new float[current_size + increment];

//     for(int i = 0; i < current_size; ++i)
//         new_arr[i] = arr[i];

//     delete[] arr;
//     return new_arr;
// }

// void calculate_average(const char *input) {
//     int size = 0;
//     int capacity = 2;

//     float *numbers = new float[capacity];
//     const char *ptr = input;
//     while(*ptr != '\0') {
//         char *end_ptr;
//         float value = strtof(ptr, &end_ptr);

//         if(end_ptr != ptr) {
//             if(size == capacity) {
//                 numbers = expand(numbers, capacity, 2);
//                 capacity += 2;
//             }
//             numbers[size++] = value;
//             ptr = end_ptr;
//         }
//         else {
//             ptr++;
//         }
//     }
//     float sum = 0;
//     for(int k = 0; k < size; ++k)
//         sum += numbers[k];
    
//     float average = (size > 0) ? sum / size : 0;
    
//     std::cout << std::fixed <<std::setprecision(2) << average << std::endl;
//     delete[] numbers;
// }

// int main() {
//     const char input[] = "am4.5gr3.1415ld.p1ws92.65pp.";
//     calculate_average(input);
//     return 0;
// }

// Napisz program, który obliczy średnią arytmetyczną wszystkich liczb w takim napisie. W tym celu:
// 1) Zaimplementuj algorytm, który wyszuka wszystkie liczby w podanym c-stringu, skonwertuje je na liczby zmiennoprzecinkowe
// i umieści w dedykowanej pomocniczej tablicy numbers.
// 2) Zakładamy, że nie mamy możliwości określenia z góry ile liczb jest w tym napisie, więc tablica numbers musi być tablicą dynamiczną,
// „powiększaną” w miarę potrzeby. W tym celu zdefiniuj pomocniczą funkcję expand(), która bierze wskaźnik na tablicę dynamiczną,
// jej rozmiar oraz liczbę określającą o ile powiększyć tę tablicę; funkcja zwraca wskaźnik na nowo zaalokowaną, powiększoną tablicę,
// która zawiera wartości z dawnej tablicy.
// 3) Z elementów tablicy numbers wyznacz średnią arytmetyczną i wyświetl wynik.

// Zadbaj o poprawne zarządzanie pamięcią tak aby nie było błędów alokacji i wycieków pamięci.
// HINT: Przydatna może być funkcja biblioteczna strtof().

// PRZYKŁAD:
// IN: "am4.5gr3.1415ld.p1ws92.65p."
// // liczby to: 4.5, 3.1415, 1, 92.65
// OUT: 25.32


float *expand(float *arr, int size, int increment) {
    
    float *new_arr = new float[size + increment];

    for(int i = 0; i < size; ++i)
        new_arr[i] = arr[i];
    
    delete[] arr;
    return new_arr;
}

void calculate_average(const char *str) {
    int size = 0;
    int capacity = 2;

    float *numbers = new float[capacity];
    const char *ptr = str;
    while(*ptr != '\0') {
        char *end_ptr;
        float value = strtof(ptr, &end_ptr);


        if(end_ptr != ptr) {
            if(size == capacity) {
                numbers = expand(numbers,capacity, 2);
                capacity += 2;
            }
            numbers[size++] = value;
            ptr = end_ptr;
        }
        else ptr++;
    }
    float sum = 0;
    for(int k = 0; k < size; ++k)
        sum += numbers[k];

    float avg = sum / size;

    std::cout << avg << std::endl;
    delete[] numbers;
}

int main() {
        const char input[] = "am4.5gr3.1415ld.p1ws92.65pp.";
        calculate_average(input);
        return 0;
    }
