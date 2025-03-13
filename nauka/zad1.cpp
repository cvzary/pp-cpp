/* 
napisz funkcje w jezyku c++ ktora przyjmie jako argumenty automatyczna tablice wartosci calkowitych
oraz jej rozmiar, funkcja powinna zwracac wartosc z tej tablicy, ktora jest najblizsza sredniej
arytmetycznej wszystkich wartosci z tej tablicy. wynik funkcji zwroc za pomoca argumentu przekazanego
do funkcji np result. napisz program w jezyku c++ ktory przetestuje dzialanie tej funkcji
*/
#include <iostream>
#include <cmath>

void f(int arr[], int n, int &result) {
    int sum = 0;
    for(int i = 0; i < n; ++i) 
        sum += arr[i];
    
    float avg = static_cast<float>(sum) / n;

    
    int minDiff = std::abs(avg - arr[0]);
    int closest = arr[0];
    for(int i = 1; i < n; ++i) {
        float diff = std::abs(avg - arr[i]);
        if(diff < minDiff) {
            minDiff = diff;
            closest = arr[i];
        }
    }
    result = closest;
}

int main() {
    int arr[] = {1,3,5,7,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = 0;
    f(arr,size,result);
    std::cout << result << std::endl;
    return 0;
}
