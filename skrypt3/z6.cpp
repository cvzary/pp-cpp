//Napisz program w języku C++, który pobiera granice przedziału domkniętego w formacie <a;b>, 
//a następnie wyświetla i zlicza wartości bez cyfry 5.

#include <cstdio>
#include <cmath>

int main() {
    int b, e, counter = 0;
    scanf("<%d;%d>", &b, &e);
    
    for(int i = b; i <= e; ++i) {
        int value = abs(i);
        bool found = false;
        while(value) {
            if(value % 10 == 5) {
                found = true;
                break;
            }
            value /= 10;
        }
        if(found)
        continue;
        printf("%d ", i);
        counter++;
    }
    printf("\n%d numbers without digit 5 has been found between %d and %d.",counter,b,e);


    return 0;
}


