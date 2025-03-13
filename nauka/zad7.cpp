#include <iostream>

bool condition(void *ptr) {
    return *(int *)ptr == *((int *)ptr + 1);
    // int *arr = (int *)ptr;
    // return arr[0] == arr[1];
}

void action(void *src, void *dst) {
    *(float *)dst = float(*(int *)src / *((int *)src + 1));
    int *arr = (int *)src;
    float *result = (float *)dst;
    result[0] = 1.f * arr[0] / arr[1];
}

void f(int arr[], int n, float result[], bool(*con)(void*), void(*act)(void*, void*)) {
    for(int i = 0; i < n / 2; ++i) {
        if(con(arr + i * 2)) result[i] = 0.f;
        else act(arr + i * 2, result + i);
    }
}

int main() {
    const int n = 10;
    int arr[n] = {1,2,3,4,5,5,11,12,10,10};
    float result[n/2] = {};
    f(arr,n,result,condition,action);
    for(int i = 0; i < n/2; ++i) std::cout << result[i] << " ";
    return 0;
}