#include <iostream>

bool check_condition(int arr[], unsigned int n, unsigned int m) {
    // Iteracja po wierszach (od 0 do n - 1)
    for (unsigned int i = 0; i < n - 1; ++i) {
        int sum_0 = 0, sum_1 = 0;
        
        // Iteracja po kolumnach (od 0 do m)
        for (unsigned int j = 0; j < m; ++j) {
            sum_0 += arr[i * m + j];        // Suma elementów w i-tym wierszu
            sum_1 += arr[(i + 1) * m + j];  // Suma elementów w (i+1)-tym wierszu
        }
        
        // Sprawdzamy warunek, czy suma wiersza (i+1) jest większa od wiersza i
        if (sum_0 >= sum_1) {
            return false;  // Jeśli warunek nie jest spełniony, zwracamy false
        }
    }
    
    // Jeśli wszystkie pary wierszy spełniają warunek, zwracamy true
    return true;
}

int main() {
    const unsigned int n = 3, m = 10;
    
    // Tablica 1D, która będzie traktowana jako tablica 2D o wymiarach n x m
    int arr[n * m] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                      11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                      21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    
    // Sprawdzamy, czy warunek jest spełniony i wypisujemy odpowiedni komunikat
    std::cout << (check_condition(arr, n, m) ? "Warunek został spełniony." : "Warunek nie został spełniony.") << std::endl;
    
    return 0;
}