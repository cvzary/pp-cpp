/*
napisz funkcje w jezyku c++ ktora przyjmuje jako arguemnty wskazniki do dwoch zmiennych typu int. funkcja powinna zwrocic
wskaznik do mniejszej wartosci z liczb wskazywanych przez argumenty, jesli argumenty maja taka sama wartosc
funkcja powinna zwracac wskaznik na pierwszy argument
*/
#include <iostream>

int *lowerValue(int *v1, int *v2) {
    if(*v1 <= *v2)
        return v1;
    else return v2;
}

int main() {
    int v1,v2;
    std::cin >> v1 >> v2;
    std::cout << std::endl;
    int *result = lowerValue(&v1,&v2);
    std::cout << *result << std::endl;
    return 0;
}

