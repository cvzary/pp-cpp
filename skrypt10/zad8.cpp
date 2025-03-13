// Napisz program w języku C++, który stworzy tablicę dowolnych liczb całkowitych. 
// Następnie program powinien przekopiować dane z tej tablicy do tablicy tymczasowej temp, 
// przesunąć wszystkie elementy o 2 w lewo
// (Dwa pierwsze elementy powinny pojawić się na końcu tablicy). (memcpy, memmove)

#include <iostream>
#include <cstring>

void print_arr(int arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    const int n = 5, offset = 2;
    int tmp[offset] = {}, a[n] = {}, b[n] = {1,2,3,4,5};
    print_arr(a,n);
    print_arr(b,n);

    memcpy(a,b, n * sizeof(int));
    print_arr(a,n);
    print_arr(b,n);

    memcpy(tmp, a, offset * sizeof(int));
    memmove(a, a + offset, (n - offset) * sizeof(int));
    memcpy(a + n - offset, tmp, offset * sizeof(int));

    print_arr(a,n);
    print_arr(b,n);
    print_arr(tmp,offset);

    return 0;
}