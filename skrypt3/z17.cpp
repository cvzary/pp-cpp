//Napisz program w języku C++, który wczyta ze standardowego wejścia dwie liczby naturalne n i m,
// a następnie wyświetli szachownicę o rozmiarze nxm, w taki sposób, by występowały w niej na przemian znaki # oraz o.

#include <iostream>

int main() {
    unsigned int n, m;
    std::cin >> n >> m;
    for(unsigned int i = 0; i < n; ++i) {
        for(unsigned int j = 0; j < m; ++j)
            std::cout << ((i + j) % 2 ? "o" : "#" );    
        std::cout << std::endl;
        
    }

    return 0;
}
