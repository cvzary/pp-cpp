//Napisz program w języku C++, który sumuje liczby, dopóki nie zostanie podana wartość 0.
//Użycie instrukcji do…while pozwala nie inicjalizować zmiennej value sztuczną wartością.
#include <iostream>
using namespace std;
int main() {
    int value, sum = 0;
    do { 
        cin >> value;
        sum += value;
    } while(value);
    cout << sum << endl;

    return 0;
}