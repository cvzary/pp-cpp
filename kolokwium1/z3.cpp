/*Zad 3.
Napisz program, który wyświetli w kolejności rosnącej/malejącej posortowaną tablicę liczb pobraną od użytkownika.
IN: 5 9 3 2 5 4*/

#include <iostream>
void swap(int& a, int& b) { int _a=a; a=b; b=_a;}
int find_min_index(int arr[], int n, int start_idx)
{
    int idx_min = start_idx;
    for(int i = start_idx; i < n; i++) {
        if(arr[i] < arr[idx_min])
            idx_min = i;
    }
    return idx_min;
}

void selection_sort(int arr[], int n) {
    for(int i = 0; i < n - 1 - i; i++) {
        int idx = find_min_index(arr, n, i);
        swap(arr[idx], arr[i]);
    }
}

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) 
        for(int k = 0; k < n-1; k++)
            if(arr[k] > arr[k+1])
                swap(arr[k], arr[k+1]);
    
}

void print_array(int arr[], int n) {
    for(int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
}


int main() 
{
    int arr[] = {5, 9, 3, 2, 5, 4};
    int n = 6;
    
    bubble_sort(arr, n);
    print_array(arr,n);
    return 0;
}