/*
Napisz program w języku C++, który wyświetli parametry wiersza poleceń, z którymi został uruchomiony.
*/

#include <iostream>
int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; ++i)
        std::cout << argv[i] << std::endl;
    return 0;
}