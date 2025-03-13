//Napisz program w języku C++, który wczyta od użytkownika dwie liczby całkowite i zwiększy ich wartość o jeden. 
//Następnie program powinien wypisać iloczyn tych liczb zmniejszony o jeden.

#include <iostream>
using namespace std;
int main() {

    int a,b;
    cin >> a >> b;
    a += 1; // a++
    b += 1; // b++

    int c = a * b;
    cout << --c << endl; // (a*b)--
   

    return 0;

}