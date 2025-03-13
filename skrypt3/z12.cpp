//Napisz program w języku C++ wyświetlający ponownie liczbę dowolnej długości.
/* VERSION 1.0
#include <cstdio>

int main() {
    int n;
    for(;;) {
        if(scanf("%1d", &n) != 1) break;
        printf("%d", n);
    }
    return 0;
}
*/

#include <iostream>
int main() {
    std::string n;
    std::cin >> n;
    std::cout << n << std::endl;

    return 0;
}