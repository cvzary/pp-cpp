//Napisz program w języku C++, który wczyta ze standardowego wejścia liczbę całkowitą n,
// następnie wypisze wszystkie dwuwyrazowe wariacje z powtórzeniami dla zbioru liczb [1;n].

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for(int i = 1; i <= n; ++i) 
        for(int j = 1; j <= n; ++j) 
            std::cout << "[" << i << "," << j << "]" << std::endl;
        
    

    return 0;
}