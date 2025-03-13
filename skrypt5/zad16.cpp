/*Napisz funkcję w języku C++, która przyjmie jako argumenty jednowymiarową tablicę liczb całkowitych oraz jej rozmiar. 
Funkcja powinna zwrócić wartość drugiej co do wielkości liczby w tej tablicy. Zakładamy rozmiar tablicy większy lub równy 2.*/
#include <iostream>

void my_swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int find_second_largest(const int arr[], int size) {
    int largest = arr[0], second_largest = arr[1];
        if(second_largest > largest)
            my_swap(second_largest,largest);
    
    for(int i = 2; i < size; ++i) 
{
        if(arr[i] > largest) 
        {
            second_largest = largest;
            largest = arr[i];
        }   
        
        else if(arr[i] > second_largest && arr[i] < largest) 
        {
            second_largest = arr[i];
        }
}
    return second_largest;
}

int main() {
    int arr[] = {9, 5, 7, 8, 3, 2, 6, 1, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = find_second_largest(arr,size);
    std::cout << "drugi najwiekszy element w tablicy to: " << result << std::endl;
    return 0; 
}