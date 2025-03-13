//Napisz program w języku C++, który wczyta użytkownika dwie liczby całkowite n i k. 
//Następnie program powinien wyświetlić liczbę n 10 razy. Na koniec program powinien wyświetlić liczbę k n razy. PETLA FOR

#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    for(int i = 0; i < 10; ++i) {
        std::cout << n << " ";
    }
    for(int i = 0; i < n; ++i) {
        std::cout << k << " ";
    }

    return 0;
}

