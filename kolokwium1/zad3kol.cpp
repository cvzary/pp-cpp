/*
Napisz program, który podzieli podane słowo na sylaby zgodnie z poniższymi zasadami: 
1) słowo składa się wyłącznie z małych liter alfabetu łacińskiego,
2) w tym alfabecie:
- samogłoski to: a, e, i, y, o, u,
- wszystkie pozostałe litery są spółgłoskami,
3) sylaba to fragment słowa, który spełnia następujące warunki:
- zawiera ciąg spółgłosek i dokładnie jedną samogłoskę, - samogłoska znajduje się na końcu sylaby (np. szklanka -> szkla - nka),
- wyjątkowo, jeśli sylaba jest ostatnią w słowie, to spółgłoski występujące po ostatniej samogłosce należą do tej sylaby
(np. ratuj - -> ra - tuj)

W celu podziału słowa na sylaby zdefiniuj funkcję word2syllables(), która przyjmuje jako argument słowo w postaci napisu 
i wyświetla to słowo podzielone na sylaby oddzielone spacjami.
W funkcji głównej zademonstruj działanie tej funkcji.

PRZYKŁAD:

IN: kolokwium
OUT: ko lo kwi um

IN: programowanie
OUT: pro gra mo wa ni e
*/

#include <iostream>

void word2syllables(char str[]) {
    for(int i = 0;str[i]; ++i) 
    {   
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'y' || str[i] == 'o' || str[i] == 'u' && str[i+2] >= 'a' && str[i+2 <= 'z'])
            std::cout << str[i] << " ";
        else
            std::cout << str[i];
    }
    
}

int main() {
    char str[] = "kolokwium";
    word2syllables(str);
    return 0;
}