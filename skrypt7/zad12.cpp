/*Napisz funkcję w języku C++, która zwróci indeks i wartość najmniejszej wartości z przekazanej w argumencie 
tablicy liczb zmiennoprzecinkowych.*/

#include <iostream>

void findMinValueAndIndex(double arr[], int size, int& minIndex, double& minValue) {
    minIndex = 0;
    minValue = arr[0];

    for(int i = 0; i < size; ++i)
        if(arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        } 
}

int main() {
    const int size = 5;
    double numbers[size] = {3.5, 1.2, 4.8, 0.9, 2.3};

    int minIndex;
    double minValue;

    findMinValueAndIndex(numbers,size,minIndex,minValue);

    std::cout << "Min Value: " << minValue << "\nMin Index: " << minIndex << std::endl;
    return 0;
}