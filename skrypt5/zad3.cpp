/*Napisz funkcję w języku C++, która będzie własną implementacją generatora liczb pseudolosowych np. generator liniowy Lehmara. 
Napisz program w języku C++, który przetestuje ten generator.*/

#include <iostream>
#include <ctime>

int lcg(int a, int b, int m, int seed, int n) {
    if(n == 1)
    return seed % m;
        return (a * lcg(a, b, m, seed, n - 1) + b) % m;
    
}

int main() {
    int seed = time(0), a = 403, b = 43, m = 201;


    for(int i = 1; i < 200; ++i) {
        std::cout << lcg(a,b,m,seed, i) << "\t";
    }

std::cout << std::endl;

return 0;
}