/*Napisz funkcje w jezyku C++ ktora przyjmuje jako argument liczbe calkowita n. funkcja powinna wyswietlic 10 liczb pseudolosowych 
z przedzialu <-n;n> Funkcja nie powinna nic zwracac.*/


#include <iostream>
#include <cstdlib>
#include <ctime>

void randomValue(int n) {
    for(int i = 0; i < 10; ++i) {
        int randomValue = rand() % (2 * n + 1) - n;
        std::cout << randomValue << " ";
    }
 }

 int main() {
    srand(time(0));
    int n;
    std::cout << "Prosze podac liczbe n" << std::endl;
    std::cin >> n;
    std::cout << std::endl;
    randomValue(n);

    return 0;
    
 }