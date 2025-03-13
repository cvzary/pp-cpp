#include <cstdio>
#include <cstdlib>
int compare_ints(const void* a, const void* b){
int arg1 = *(const int*)a;
int arg2 = *(const int*)b;
if (arg1 < arg2) return -1;
if (arg1 > arg2) return 1;
return 0;
}
int main(void) {
const int n = 7;
int arr[n] = { -2, 99, 0, -743, 2, 23, 4 };
int size = sizeof(arr)/sizeof(arr[0]);

qsort(arr, size, sizeof(int), compare_ints);
for (int i = 0; i < size; i++)
printf("%d ", arr[i]);
}