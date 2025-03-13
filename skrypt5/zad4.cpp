//Napisz funkcję w języku C++, która wyświetla wartości od 1 do N, bez użycia pętli. 
//Zaimplementuj odpowiedni program, który sprawdzi działanie funkcji i wczyta od użytkownika wartość zmiennej N.

#include <iostream>

void print(int current, int max) {
    if(current <= max) {
        std::cout << current << " ";
        print(current + 1, max);
    }
}

int main() {
    int N;
    std::cin >> N;
    std::cout << std::endl;

    print(1, N);
    return 0;
}