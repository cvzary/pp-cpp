/*Napisz program w języku C++, który zamienia wartościami dwie zmienne całkowite i nie używa do tego dodatkowej zmiennej. 
Wykorzystaj do tego operacje bitowe.*/

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << "a= " << a << " b= " << b << endl;   //4,6   0100, 0110
    a ^= b;
    b ^= a;
    a ^= b;
        
    cout << "a= " << a << " b= " << b << endl;
    return 0;
}   
