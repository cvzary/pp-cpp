/*Napisz program w języku C++, który wczytuje od użytkownika trzy liczby całkowite n, m, o, a następnie dynamicznie alokuje pamięć 
dla n-elementowej, m-elementowej i o-elementowej tablicy liczb całkowitych. W kolejnym kroku program powinien uzupełnić tablice losowymi 
wartościami z przedziału <0;5> i je posortować. Na koniec z tak posortowanych tablic algorytm powinien wypisać elementy powtarzające się
 we wszystkich tablicach.*/

 #include <iostream>
 #include <cstdlib>
 #include <ctime>

const int MIN = 0;
const int MAX = 5;

 void print_arr(int *arr, int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
 }

void fill_arr(int *arr, int n) {
    for(int i = 0; i < n; ++i)
        arr[i] = MIN + rand() / (RAND_MAX / (MAX - MIN + 1));
}

void bubble_sort(int *arr, int n) {
    for(int i = 0; i < n - 1; ++i)
        for(int j = 0 ;j < n - i - 1; ++j)
            if(arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j+1]);
}

void f(int *arr1, int n, int *arr2, int m, int *arr3, int o) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m && k < o) {
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            std::cout << arr1[i] << " ";
            i++; j++; k++;
        }
        else if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr2[j] < arr3[k]) {
            j++;
        }
        else {
            k++;
        }
    }
}

int main() {
    srand(time(0));
    int n,m,o;
    std::cin >> n >> m >> o;
    std::cout << "\n";
    
    int *arr1 = new int[n];
    int *arr2 = new int[m];
    int *arr3 = new int[o];

    fill_arr(arr1,n),fill_arr(arr2,m),fill_arr(arr3,o);
    bubble_sort(arr1,n),bubble_sort(arr2,m),bubble_sort(arr3,o);
    print_arr(arr1,n),print_arr(arr2,m),print_arr(arr3,o);

    std::cout << "powtarzajace sie wartosci: \n";
    f(arr1,n,arr2,m,arr3,o);
    
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    return 0;
}