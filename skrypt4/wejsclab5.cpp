//Napisz funkcje w języku c++ która przyjmuje jako argument liczbę całkowita n. 
//Funkcja powinna wyświetlić n liczb pseudolosowych z przedziału <20;40>. 

#include <iostream>
#include <cstdlib>
#include <ctime>
const int MIN = 20;
const int MAX = 40;
void generateNumbers(int n) {
    srand(time(0));

    for(int i = 0; i < n; ++i) {
    int randomNumber = rand() % (MAX - MIN + 1) + MIN;
    std::cout << randomNumber << " ";
    }
    std::cout << std::endl;
}
    int main() {
        int n;
        std::cout << "\nProsze wprowadz ile n liczb pseudolosowych ma byc wylosowanych: \n" << std::endl;
        std::cin >> n;
        std::cout << std::endl;
       
        generateNumbers(n);

        return 0;
    }