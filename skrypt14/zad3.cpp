/*
Napisz program w języku C++, który zapisze do pliku 10 dowolnych liczb całkowitych. Do obsługi błędów użyj funkcji perror.
*/

#include <cstdio>

int main() {
    FILE *out = NULL;

    if((out = fopen("result.bin", "wb")) == NULL) {
        perror("fopen() failed");
        return 1;
    }   else {
        int arr[10];
        for(int i = 0; i < 10; ++i) arr[i] = i;
        fwrite(arr, sizeof(int), 10, out);
        fclose(out);
    }
    return 0;
}