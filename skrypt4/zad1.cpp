//Napisz program w języku C++, który wczyta od użytkownika przedział lewo stronnie domknięty w formacie <a;b).
// Następnie program powinien wyświetlić wszystkie liczby niepodzielne przez 3 i 5 w tym przedziale. Przykład: <3;16) 4, 7, 8, 11, 13, 14
/*
#include <cstdio>

int main() {

    int a, b;
    scanf("<%d;%d)", &a, &b);
    for(int i = a; i < b; ++i) {
        if(!(i % 3 == 0 || i % 5 == 0)) {
            printf("%d, ", i);
        }
    }
    return 0;
}
   version 2.0

   #include <cstdio>
   int main() {
    int a, b;
    scanf("<%d;%d)", &a, &b);
    for(int i = a; i < b; ++i) {
        if(i % 3 != 0 && i % 5 != 0) {
            printf("%d, ", i);
        }
    }
    return 0;
    }

    version 3.0 */
#include <cstdio>
    int main() {
   int a, b;
   scanf("<%d;%d)", &a, &b);
   for(int i = a; i < b; ++i) 
   {
      if(i % 3 == 0 || i % 5 == 0) continue; 
      printf("%d, ", i);
   }
   return 0;
}   