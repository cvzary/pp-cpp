// Zmodyfikuj poprzedni program tak, aby wyświetlał odpowiednio true i false.

#include <iostream>

int main() {
    bool b1 = false;
    std::cout << (b1 ? "true" : "false"); // zamiast pisac if blokA, else blokB mozna uzyc = warunek ? (blok A) : (blok B);

    return 0;
}