#include <cstdio>

int main() {
    int HH, mm, tmp;
    printf("Prosze podac godzine w formacie HH:mm: ");
    scanf("%d:%d", &HH, &mm);
    tmp = mm + HH * 60;
    printf("Prosze podac druga godzine w formacie HH:mm: ");
    scanf("%d:%d", &HH, &mm);
    tmp -= mm + HH * 60;
    printf("Roznica wynosi: %d minut", tmp);
    return 0;
}