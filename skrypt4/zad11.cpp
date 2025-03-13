/*Napisz funkcję w języku C++, która przyjmie jako argumenty automatyczną tablicę wartości całkowitych i ilość jej komórek. 
Funkcja powinna wyświetlać wszystkie unikalne wartości w tej tablicy.*/

#include <iostream>

void unique(int arr[], int n) {
    int counter;
    for(int i = 0; i < n; ++i) {
        counter = 0;
        for(int j = i; j < n; ++j) 
            if(arr[i] == arr[j])
                counter++;

        if(counter == 1)
            std::cout << arr[i] << " ";
    }

}

int main() {
    int arr[] = {5,3,1,3,4,1,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    unique(arr,n);

    return 0;
}