/*Napisz program w języku C++, który wczyta od użytkownika wymiary prostokątnego pola bitwy NxM, a następnie dla każdego pola dwie wartości
całkowite A oraz D. Na każdym polu znajduje się działo: A definiuje jego moc ataku, zaś D jego obronę. Działa strzelają do siebie nawzajem,
jeśli działo atakujące ma większą wartość ataku niż wartość defensywy przeciwnika, to wygrywa walkę i niszczy działo atakowane. 
W przeciwnym wypadku wygrywa działo broniące się, niszcząc działo atakujące. Program po wczytaniu pola bitwy powinien wczytać wartość 
nieujemnej zmiennej całkowitej C, a następnie C sekwencji danych: ax, ay, dx, dy, gdzie ax, ay to współrzędne działa atakującego,
zaś dx, dy działa broniącego się, po każdej operacji z pola bitwy powinno zniknąć jedno działo. Na koniec program powinien wyświetlić
stan pola bitwy w formie:

0 X 0 0 0
0 0 0 X 0
X X 0 0 0

,gdzie X – oznacza działo zniszczone, a O – działo, które pozostało na polu bitwy. Użyj dynamicznej alokacji pamięci,
rozwiązanie powinno być rozwiązaniem optymalnym. (Optymalne: pole bitwy powinno być spójnym obszarem pamięci.)

Przykład:

5 3

1 5 2 6 9 2
1 5 7 1 2 2
5 3 2 8 9 5
6 6 8 2 4 1

3 6 4 2 8 3

3

0 0 4 2
4 2 0 2
1 1 2 1   */

#include <iostream>
using namespace std;

typedef unsigned int uint;

void print_arr(int *arr, uint n, uint m) {
    for(uint i = 0; i < n; ++i) {
        for(uint j = 0; j < m; ++j)
            cout << (arr[i * m * 2 + j * 2 + 0] == -1 && arr[i * m * 2 + j * 2 + 1] == -1 ? 'X' : 'O') << " ";
        cout << endl;
    }
}

void f(int *arr, uint ax, uint ay, uint dx, uint dy, uint n, uint m) {
    if(arr[ax * m * 2 + ay * 2 + 0] > arr[dx * m * 2 + dy * 2 + 1]) 
        arr[dx * m * 2 + dy * 2 + 0] = arr[dx * m * 2 + dy * 2 + 1] = -1;
    else 
        arr[ax * m * 2 + ay * 2 + 0] = arr[ax * m * 2 + ay * 2 + 1] = -1;
}

int main() {
    uint n, m, c, ax, ay, dx, dy;

    // Wczytanie wymiarów pola bitwy
    cin >> n >> m;
    
    // Dynamiczna alokacja tablicy dla pola bitwy
    int *battlefield = new int[n * m * 2];
    
    // Wczytanie danych (moc ataku i obrony dla każdego działa)
    for(uint i = 0; i < n; ++i)
        for(uint j = 0; j < m; ++j)
            cin >> battlefield[i * m * 2 + j * 2 + 0] >> battlefield[i * m * 2 + j * 2 + 1];
    
    // Wczytanie liczby pojedynków
    cin >> c;
    
    // Wczytywanie współrzędnych i symulacja pojedynków
    for(uint i = 0; i < c; ++i) {
        cin >> ax >> ay >> dx >> dy;
        f(battlefield, ax, ay, dx, dy, n, m);
    }
    
    // Wypisanie końcowego stanu pola bitwy
    print_arr(battlefield, n, m);
    
    // Zwolnienie dynamicznie alokowanej pamięci
    delete[] battlefield;
    
    return 0;
}
