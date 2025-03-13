/*Pewna obojnacza populacja rozwija się w taki sposób, że na wiosnę wszystkie osobniki łączą się w pary, a każda para ma jedno młode. 
W lecie liczebność nie zmienia się. Przez jesień populacja pozbywa się dziesięciu najsłabszych osobników. Zimę przeżywa 60% populacji. 
Napisz funkcję rekurencyjną w języku C++, która przyjmie początkową liczebność populacji oraz rok i porę roku (wiosna – 0, …, zima – 3)
sprawdzenia jej wielkości. Funkcja powinna zwrócić liczebność populacji w podanym roku, po zakończeniu podanej pory roku. Zakładamy,
że początkowa liczebność jest odczytana w roku 0, na początku wiosny. Jeżeli pośrednim lub ostatecznym wynikiem będzie 
liczba niecałkowita, zaokrąglamy wynik na niekorzyść populacji. Dodatkowo napisz program w języku C++, który sprawdzi działanie funkcji.*/

#include <cstdio>
int pop(int initCount, int year, int season){
    int n;
    if(year == 0 && season == 0) return initCount;
    if(season == 0) n = pop(initCount, year - 1, 3);
    else n = pop(initCount, year, season-1);
    
    if(n == 0) return 0;
    switch (season){
    case 0:
        return n * 1.5;
    case 1:
        return n;
    case 2:
        return n > 10 ? n - 10 : 0;
    case 3:
        return n * 0.6;
    default:
        return 0;
    }
}
int main(){
    int initCount = 1000, year = 5, season = 2;
    printf("%d",pop(initCount, year, season));
    return 0;
}