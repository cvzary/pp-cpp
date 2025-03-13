/*
Napisz funkcję w języku C++, która przyjmuje następujące argumenty: wskaźnik na
początek tablicy liczb całkowitych - begin, wskaźnik na koniec tablicy liczb całkowitych - end oraz referencję na zmienną typu logicznego.
Funkcja powinna sprawdzić, czy w tablicy znajduje się wartość 5 i za pomocą ostatniego argumentu zwrócić odpowiedź.
Napisz program w języku C++, który sprawdzi działanie tej funkcji.
*/
#include <iostream>

void containsFive(int *begin, int *end, bool &result) {
    result = false;
    for(int *i = begin; i < end; ++i) 
        if(*i == 5)
            result = true;
}

int main() {
    int arr[] = {1,0,4,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool found;
    containsFive(arr, arr+size, found);
    if(found)  std::cout << "wystepuje" << std::endl;
    else std::cout << "brak" << std::endl;
    return 0;
}