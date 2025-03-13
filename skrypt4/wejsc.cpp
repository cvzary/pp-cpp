//Napisz program w języku C++, który wczyta od użytkownika wartość n i obliczy sumę szeregu 1 + 1/2 + 1/3 + … + 1/n.

#include <iostream>

int main() {
    int n;
    float sum = 0;
    std::cin >> n;
    for(int i = 1; i <= n; ++i) 
    {
        sum += 1/i;
    }
    std::cout << sum << std::endl;

    return 0;
}