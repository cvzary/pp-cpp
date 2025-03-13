/*Napisz funkcje w języku C++, która zamienia wartościami dwie liczby rzeczywiste. Napisz program, który przetestuje działanie tej funkcji.*/

#include <iostream>
using namespace std;

void swap1(float *a, float *b) { //przez wskaznik   
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(float &a, float &b) { // przez referencje
    float temp = a;
    a = b;
    b = temp;
}

//Gdybyśmy mówili o liczbach całkowitych moglibyśmy pozwolić sobie na poniższy zapis.
void swap3(int *x, int *y) {
    if (x != y) {
        *x ^= *y;
        *y ^= *x;
        *x ^= *y;
    }
}

int main() {
    float a = 5.f, b = 10.f;
    cout << a << " " << b << endl;
    swap1(&a, &b);
    cout << a << " " << b << endl;
    swap2(a, b);
    cout << a << " " << b << endl;
    int i_a = a, i_b = b;
    swap3(&i_a, &i_b);
    cout << i_a << " " << i_b << endl;
    return 0;
}