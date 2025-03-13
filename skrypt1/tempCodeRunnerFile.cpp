#include <cstdio>

int main() {

    int HH, mm, tmp;

    scanf("%d:%d", &HH, &mm);
    tmp = mm + HH * 60;
    scanf("%d:%d", &HH, &mm);
    tmp -= (mm + HH * 60);
    printf("Roznica to: %d minut", tmp);

    return 0;

}