/*Zmodyfikuj program z poprzedniego zadania tak, aby w przypadku, gdy liczba o największej wartości pojawia się w tablicy wielokrotnie,
 program wyświetlił indeksy wszystkich komórek, w których znajduje się ta liczba.*/
//ponizej polecenie poprzednie>>>
/*Napisz program w języku C++, który utworzy n-elementową tablicę liczb całkowitych i zapełni ją danymi. 
Program powinien wyświetlić indeks komórki tablicy, w której została znaleziona liczba o największej wartości. 
Jeżeli ta sama liczba pojawia się w większej liczbie komórek, należy wyświetlić indeks dowolnej z nich.*/

#include <iostream>

void max_value_idx(int arr[], unsigned int n, bool result[]) {
    int max = arr[0];
    for(unsigned int i = 1; i < n; ++i)
        if(max < arr[i]) max = arr[i];
    for(unsigned int i = 0; i < n; ++i)
        if(max == arr[i]) result[i] = true;
}
void print_results(bool result[], unsigned int n) {
    for(unsigned int i = 0; i < n; ++i)
        if(result[i])
            std::cout << i << " ";
    std::cout << std::endl;
}

int main() {
    const unsigned int n = 6;
    int arr[n] = {1,5,2,3,5,4};
    bool result[n] = {false};

   max_value_idx(arr,n,result);
   print_results(result,n);

    return 0;
}