/*
Zaprojektuj funkcję w języku C++, która zwróci indeks szukanej wartości w posortowanej tablicy liczb całkowitych. 
Funkcja powinna zwrócić -1, jeśli nie uda się znaleźć takiej wartości w tablicy. 
Rozwiązanie powinno wykorzystywać algorytm Binary Search. Napisz program w języku C++, który przetestuje działanie tej funkcji.
*/


#include <iostream>
#include <cstdlib>
int binarySearch(int *arr, int l, int r, int x) {
    int mid = (l + r) / 2;
    if(mid <= r && mid >= l) {
        if(arr[mid] == x) return mid;
        else if(arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
        else return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int compare(const void *ap, const void *bp) {
    return *(int*)ap - *(int*)bp;
}
int main() {
    int arr[] = {1, 2, 3, 4, 10, 22, 23, 42};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    int *p = (int *) bsearch(&x, arr, n, sizeof(arr[0]), compare);
    std::cout << (result == -1 ? "Brak" : std::to_string(result)) << std::endl;
    std::cout << (p ? std::to_string(p - arr) : "Brak") << std::endl;
    return 0;
}