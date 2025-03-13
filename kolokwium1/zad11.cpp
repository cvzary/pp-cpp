/*Napisz program, który pobiera od użytkownika dwie liczby całkowite dodatnie n i m. Następnie program ma generować i wyświetlać na ekranie pseudolosowe zdanie, które ma być zbudowane z n słów a każde słowo ma być zbudowane z co najwyżej m znaków. W słowach mają się pojawiać, z równym prawdopodobieństwem, małe i duże litery.
PRZYKŁAD:
IN: 8 5
OUT: jtETN jxpd G DDYmP NYtT HubNe IAByV jmN */

#include <iostream>
#include <cstdlib> // Do funkcji rand() i srand()
#include <ctime>   // Do funkcji time()

// Funkcja do generowania losowego słowa o maksymalnej długości `m`
void generateWord(int m, char word[]) {
    int length = rand() % m + 1; // Długość słowa (od 1 do m)
    
    for (int i = 0; i < length; ++i) {
        // Losujemy małą lub dużą literę z równym prawdopodobieństwem
        if (rand() % 2 == 0)
            word[i] = 'a' + rand() % 26; // Mała litera
        else
            word[i] = 'A' + rand() % 26; // Duża litera
    }
    word[length] = '\0'; // Zakończenie słowa znakiem null
}

int main() {
    // Wczytanie danych od użytkownika
    int n, m;
    std::cout << "Podaj liczby n (liczba słów) i m (maksymalna długość słowa): ";
    std::cin >> n >> m;

    // Ustawienie losowego ziarna
    srand(time(0));

    // Tablica do przechowywania jednego słowa
    char word[21]; // Maksymalna długość słowa to 20 + znak null

    // Generowanie zdania z `n` słów
    for (int i = 0; i < n; ++i) {
        generateWord(m, word); // Generowanie słowa
        std::cout << word;     // Wyświetlenie słowa
        if (i < n - 1)         // Dodawanie spacji pomiędzy słowami
            std::cout << " ";
    }

    std::cout << std::endl;
    return 0;
}