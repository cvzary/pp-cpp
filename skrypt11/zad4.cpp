/*
Napisz program w języku C++, który posortuje tablicę dowolnych liczb rzeczywistych arr1 malejąco oraz tablicę dowolnych liczb całkowitych 
arr2 rosnąco. Do sortowania wykorzystaj algorytm Quick Sort z pliku nagłówkowego cstdlib.
*/

#include <iostream>
#include <cstdlib>

int min(const void *a, const void *b) {
    float av = *(float *)a;
    float bv = *(float *)b;
    if(av > bv) return -1;
    else if(av == bv) return 0;
    else return 1;
    // lub
    // return *(float *)a > *(float *)b ? -1 : 1;
    //powyższy zapis wynika z konwersji liczb zmiennoprzecinkowych na liczbę całkowitą np. float 0.2 -> int 0 itd. 
}

int max(const void *a, const void *b) {
    int av = *(int *)a;
    int bv = *(int *)b;
    if(av < bv) return -1;
    else if(av == bv) return 0;
    else return 1;
}   //lub
    //return *(int*)a - *(int*)b;

int main() {
    float arr1[] = {1.f, 2.f, 3.f, 5.f, 15.f, 0.f, 12.f, 13.f, 5.f, 7.f};
    int arr2[] = {1, 2, 3, 5, 15, 0, 12, 13, 5, 7};
    qsort(arr1,sizeof(arr1)/sizeof(arr1[0]),sizeof(float), min);
    for(int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;
    
    qsort(arr2, 10, sizeof(int), max);
    for(int i = 0; i < 10; ++i) 
        std::cout << arr2[i] << " "; 
    std::cout << "\n";
    
    return 0;
}
