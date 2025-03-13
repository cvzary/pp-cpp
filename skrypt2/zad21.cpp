//Napisz program w języku C++, który wczytuje ze standardowego wejścia współczynniki układu dwóch równań liniowych z dwoma niewiadomymi 
//i wypisuje na standardowym wyjściu rozwiązanie układu równań. W przypadku nieskończonej liczby lub braku rozwiązań program powinien
// wypisać na standardowym wyjściu odpowiednią informację. 
//Podpowiedź: zaimplementuj algorytm rozwiązywania układów równań metodą wyznaczników (inaczej nazywaną wzorami Cramera).

#include <iostream>

int main() {

    float a_0, b_0, c_0, a_1, b_1, c_1, determinant, x, y;
    std:: cin >> a_0 >> b_0 >> c_0 >> a_1 >> b_1 >> c_1;


    determinant = a_0 * b_1 - b_0 * a_1;
    x = (c_0 * b_1 - b_0 * c_1);
    y = (a_0 * c_1 - c_0 * a_1);
    if(determinant) {
        std::cout << "x =  " << x / determinant << ", y = " << y / determinant << std::endl;

    }   else {
        std::cout << (!x && !y ? "Nieskonczenie wiele rozwiazan" : "brak rozwiazan") << std::endl;
    }
    return 0;

}