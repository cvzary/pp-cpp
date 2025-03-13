/*Zmodyfikuj poprzedni program tak, aby zwracał wynik za pomocą argumentu funkcji.*/

/*Napisz funkcję w języku C++, która przyjmie jako argumenty automatyczną tablicę wartości całkowitych oraz jej rozmiar. 
Funkcja powinna zwracać wartość z tej tablicy, która jest najbliższa średniej arytmetycznej wszystkich wartości z tej tablicy.
 Napisz program w języku C++, który przetestuje działanie tej funkcji.*/

#include <iostream>
#include <cmath>
#include <iomanip>

float avg(int arr[], int n) {
    float sum = 0;
    for(int i = 0; i < n; ++i)
        sum += arr[i];
    
    return sum / n;    
}

void closest_to_avg(int arr[], int n, int &result) {
    float av = avg(arr,n);

    float min = fabs(arr[0] - av);
    int index = 0;
    for(int i = 1; i < n; ++i) {
        float value = fabs(arr[i] - av);
        if(value < min) {
            min = value;
            index = i;
        }
    }
    result = arr[index];
}

int main() {
    int result, arr[] = {5,5,3,6,76,3,3,6,4,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    closest_to_avg(arr,n, result);
    std::cout << result << std::endl;

    return 0; 
}
