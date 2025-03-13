//Zmodyfikuj poprzedni program tak, aby pobierał liczbę całkowitą (także ujemną) 
//i wyświetlał wszystkie liczby całkowite z zakresu domkniętego [x, 0] lub [0, x].

#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if(x>0) {
        for(int i = 0; i <= x; ++i) {
        std::cout << i << " "; 
        }
    } else if(x<0) {
        for(int i = x; i <= 0; ++i) {
        std::cout << i << " ";
        }
    }
    return 0;
}