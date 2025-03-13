/*
Radar morski na statku to prawdopodobnie najczęściej używany sprzęt elektroniczny podczas nawigacji. 
To doskonałe narzędzie do wykrywania obiektów wokół nas. Niestety jesteśmy tak bardzo uzależnieni od radaru, 
że czasami używamy go częściej niż własnych oczu do obserwacji wokół.

Jednakże inna sytuacja miała miejsce, gdy pewien marynarz odczytywał dane z notatek pozostawionych na pokładzie swojego statku. 
W notatkach kapitan pokładu zapisał położenia N obiektów na morzu za pomocą współrzędnych biegunowych w następujący sposób:

R1 F1 R2 F2 ... Rn Fn

gdzie R to promień wodzący obiektu (odległość), zaś F to amplituda punktu (wartość kąt skierowanego w radianach). 
Na kolejnej kartce zapisane było N nazw własnych, które prawdopodobnie dotyczyły zbliżających się okrętów:

Nazwa1 Nazwa2 ... Nazwan

Zaimplementuj funkcję, która posortuje dane przedstawione na obu tych notatkach tak, aby przedstawiła nazwy okrętów w kolejności 
od najmniej do najbardziej odległego od statku naszego bohatera, który znajduje się w punkcie (0, 0). W sytuacji, 
gdy oba obiekty są tak samo odległe należy wybrać ten o mniejszej amplitudzie.

Napisz program w języku C++, który przetestuje działanie tej funkcji i wyświetli nazwy zbliżających się okrętów w odpowiedniej kolejności.

Uwagi: R i F mogą być liczbami rzeczywistymi, zaś nazwy okrętów nie są dłuższe niż 99 znakowe słowa. 
W zadaniu nie można używać struktur i klas.

Przykład:
input:
 [1.2 6.1 1.2 1.1 5.4 3.1]
 [Alfa Omega Sigma]
output:
 Omega Alfa Sigma
*/

#include <iostream>
#include <algorithm>

bool compare(float r1, float f1, float r2, float f2) {
    if(r1 < r2) return false;
    else if(r1 == r2 && f1 < f2) return false;
    return true;
}

void ships_sort(float cords[], char names[][100], int n ) {
    for(int i = 0; i < n - 2; i += 2)
        for(int j = 0; j < n - i - 2; j += 2)
            if(compare(cords[j], cords[j+1], cords[j+2], cords[j+3])) {
                std::swap(cords[j], cords[j+2]);
                std::swap(cords[j+1], cords[j+3]);
                std::swap(names[j/2], names[(j+2) / 2]);
            }
}

void print_ships_names(char names[][100], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << names[i] << " ";
    std::cout << std::endl;
}

int main() {
    const int N = 3;
    float ships[2 * N] = {1.2f, 6.1f, 1.2f, 1.1f, 5.4f, 3.1f}; 
    char ships_names[N][100] = {"Alfa", "Omega", "Sigma"};
    ships_sort(ships,ships_names, 2 * N);
    print_ships_names(ships_names, N);
    return 0;
}