/*
Napisz program w języku C++, który umożliwi użytkownikowi wprowadzenie wiadomości zawierającej informacji o jego imieniu, wieku, 
wzroście i wadze w następującym formacie np. Test 12 182 82.2. Odczytaj informacje z tak przekazanej wiadomości i zapisz je w odpowiednich 
zmiennych. Następnie program powinien wyświetlić te informację w następujący sposób:
Imię (dane w tej linii powinny być przesunięte w prawą stronę – wcięcie w tekście)
Wiek (w systemie szesnastkowym)
Wzrost (w systemie dziesiętnym)
Waga (z dokładnością do 3 miejsc po przecinku)
*/

#include <iostream>
#include <iomanip>

int main() {
    char name[20] = {};
    int age;
    int height;
    double weight;
    std::cin >> name >> age >> height>> weight;
    std::cout << std::right << std::setw(20) << "Imie: " << name << std::endl;
    std::cout << "wiek(hex): " << std::hex << age << std::endl;
    std::cout << "wzrost(dec): " << std::dec << height << std::endl;
    std::cout << std::fixed << std::setprecision(3) << "Waga: " << weight << std::endl;
    return 0;
}

