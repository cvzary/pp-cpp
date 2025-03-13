/*Napisz program w języku C++, który stworzy 15 elementową tablicę dowolnych wartości rzeczywistych. 
Następnie program, który wczyta od użytkownika 5 liczb całkowitych, będących indeksami wcześniej stworzonej tablicy. 
Program powinien wyświetlić elementy tablicy o wskazanych przez użytkownika indeksach i zapewnić odpowiedni komunikat, 
jeśli indeks wykracza poza rozmiar tablicy. Zastanów się nad bardziej uniwersalnym rozwiązaniem takiego zadania.*/

#include <iostream>

using namespace std;

int main() {
    float arr[15] = {1.f, 2.f, 3.f, 4.f, 5.f, 6.f, 7.f, 8.f, 9.f, 10.f, 11.f, 12.f, 13.f, 14.f, 15.f};
    int k = 5;
    int temp;
    while(k--) {
        cin >> temp;
        if(temp >= 0 && temp < 15) cout << arr[temp] << endl;
        else cout << "poza zakresem" << endl;
    }
    return 0;
}

/*

//Version 2.0
#include <iostream>
using namespace std;
void f(float values[], int n_v, int ids[], int n_i) {
    for(int i = 0; i < n_i; ++i)
        cout << (ids[i] >= 0 && ids[i] < n_v ? values[ids[i]] : 0.f) << endl;
}
int main() {
    const int k = 5, n = 15;
    float arr[15] = {1.f, 2.f, 3.f, 4.f, 5.f, 6.f, 7.f, 8.f, 9.f, 10.f, 11.f, 12.f, 13.f, 14.f, 15.f};
    int ids[k];
    for(int i = 0; i < k; ++i) cin >> ids[i];
    f(arr, n, ids, k);
    return 0;
}
*/