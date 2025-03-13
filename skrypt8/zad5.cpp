/*Napisz funkcję w języku C++, która przyjmie jako argumenty automatyczną tablicę wartości całkowitych, jej rozmiar oraz 
poszukiwaną wartość. Funkcja powinna zwrócić wskaźnik na pierwszą komórkę tablicy, w której znajdzie tą wartość. 
Jeżeli nie ma takiej liczby w tablicy, należy zwrócić wskaźnik na NULL.*/
#include <iostream>
using namespace std; 

int *f(int arr[], int n, int v) {
    for(int i = 0; i < n; ++i)
        if(arr[i] == v)
            return arr + i;
    return NULL;
}

int main() {
    int arr[5]={3, 6, 9, 5, 2};
    int *result = f(arr, 5, 2);
    if(result != NULL)  cout << "Wartosc: " << *result << " Pozycja: " << result - arr  << endl;
    return 0;
}