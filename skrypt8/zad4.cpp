/*Napisz funkcję rekurencyjną w języku C++, która oblicza rozmiar napisu (char str[]). 
Napisz program w języku C++, który przetestuje działanie tej funkcji.*/
#include <iostream>
using namespace std;

int f_rec(char *a, int num) {
    return *a ? f_rec(a + 1, num + 1) : num;
}

int main() {
    char arr[] = "12345";
    cout << f_rec(arr, 0);
    return 0;
}