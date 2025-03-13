/*Napisz program w języku C++, który modyfikuje wartość zmiennej za pomocą wskaźnika. */

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = &a;
    cout << a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}