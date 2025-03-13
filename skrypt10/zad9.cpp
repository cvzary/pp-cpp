/*Napisz program w języku C++, który zaalokuje dynamicznie tablicę wskaźników na liczby całkowite o rozmiarze n.
Program do każdej komórki tej tablicy powinien przypisać wskaźnik do dynamicznie zaalokowanej tablicy liczb całkowitych o rozmiarze m.
Następnie program powinien wypełnić tablicę danymi indeksując ją tak, jakby była dwuwymiarową tablicą liczb całkowitych.
Na koniec należy zwrócić uwagę na odpowiednie zwalnianie pamięci zajmowanej przez te tablice.*/

#include <iostream>

int main() {
    int n = 2, m = 3;
    int **arr_2d = new int*[n];
    for(int i = 0; i < n; ++i)
        arr_2d[i] = new int[m];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            arr_2d[i][j] = i * m + j;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) 
            std::cout << arr_2d[i][j] << " ";
        std::cout << std::endl;
    }
        

    for(int i = 0; i < n; ++i)
        delete[] arr_2d[i];
    delete[] arr_2d;
    return 0;
}
