/*
Napisz funkcję w języku C++, która przyjmie tablicę napisów (wskaźników na znaki), z których część ma wartość nullptr. 
Jeżeli taka wartość się pojawi, funkcja powinna: (1) dynamicznie utworzyć napis, (2) przepisać tam napis z poprzedniego wiersza
pomijając co drugi znak, (3) przypisać powstały napis do komórki tablicy wskaźników. 
Rozmiar utworzonego napisu powinien być optymalny. Zakładamy, że pierwsza komórka tablicy nie zawiera nullptr.
*/

#include <iostream>
const int n = 4;
int str_len(char *str) {
    int result = 0;
    for(;str[result];++result);
    return result;
}
void parse_arr(char *arr[], int n) {
    int len = 0, tmp_size = 0;
    for(int i = 0; i < n; ++i) {
        if(not arr[i]) {
            len = str_len(arr[i - 1]);
            tmp_size = len  / 2 + 1;
            arr[i] = new char[tmp_size]();
            for(int j = 0; arr[i - 1][j] and j < len; j += 2)
                arr[i][j / 2] = arr[i - 1][j];
        }
                
    }
    
}
void print_arr(char *arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << std::endl;
}
int main() {
    char *arr[n] = {"Ala ma kota.", nullptr, "test2", nullptr};
    parse_arr(arr, n);
    print_arr(arr, n);
    return 0;
}