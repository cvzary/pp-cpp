/*Napisz funkcję w języku C++, która przyjmuje jako argumenty 10-elementową automatyczną tablicę liczb rzeczywistych oraz jej rozmiar. 
Funkcja powinna zwrócić true, jeśli tablica czytana od końca wygląda tak samo, ta tablica czytana od początku, 
bądź false w przeciwnym wypadku. Napisz program w języku C++, który przetestuje działanie tej funkcji,
 wczytując od użytkownika 10 wartości wprowadzonych do tablicy. */
#include <iostream>
#include <cmath>
using namespace std;


 bool f(float arr[], int n) {
    for(int i = 0; i < ceil(n / 2); ++i)
        if(arr[i] != arr[n - i - 1]) return false;
    return true;
 }

 int main() {
    const int n = 10;
    float arr[n];
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << f(arr,n);
    return 0;
 }