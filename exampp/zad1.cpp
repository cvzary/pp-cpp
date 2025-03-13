#include <iostream>
#include <cmath>

using namespace std;

void fuse_on(unsigned char* arr, int x)
{
    arr[x / 8] |= (1 << (x % 8));
}

void print_fuses(unsigned char* fuses, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 7; j >= 0; j--) { // Poprawione: drukujemy od MSB do LSB
            if (fuses[i] & (1 << j)) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int size = ceil(n / 8.0); // Poprawione: (float)n -> n / 8.0 dla precyzji
    unsigned char *arr = new unsigned char[size];
    memset(arr, 0, size); // Poprawione: zamiast pętli inicjalizujemy memset

    fuse_on(arr, 4);
    fuse_on(arr, 7);
    fuse_on(arr, 9);

    print_fuses(arr, size);

    delete[] arr;
    return 0;
}
