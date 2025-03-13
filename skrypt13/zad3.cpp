/*
Napisz program w języku C++, który będzie symulował nadawanie praw dostępu plików tj. R – readable, W – writable, X – executable.
*/

#include <iostream>

enum Privileges{R = 4, W = 2, X = 1};

int main() {
    int mod = R + X;
    std::cout << mod << std::endl;
    if(mod & R) std::cout << "readable\n";
    if(mod & W) std::cout << "writeable\n";
    if(mod & X) std::cout << "executable\n";
    return 0;
}