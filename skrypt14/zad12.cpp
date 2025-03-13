/*
Mateusz, młody programista, spędził w Lublinie kilka dni. Przykładny i skrupulatny student uczestniczył we wszystkich zajęciach 
akademickich, aby pozyskać nową wiedzę. Nasz bohater zmęczony całym tygodniem nauki oraz natłokiem obowiązków zawodowych, 
zaplanował sobie wycieczkę krajoznawczą na weekend. W związku z piękną pogodą wybranym przez Mateusza środkiem lokomocji był jego 
rower, zaś celem podróży nieodległa miejscowość Łęczna. W Łęcznej zainteresowała go „Dolina dinozaurów”, 
którymi Mateusz pasjonował się całe swoje dzieciństwo. Niewątpliwie łęczyńska dolina dinozaurów jest ciekawym miejscem. 
Jej pomysłodawcą i twórcą jest lokalny rzeźbiarz, a znajdującą się w Podzamczu k. Łęcznej dolinę tworzy 8 betonowych rzeźb wielkości 
od 2 do 8 m. Mateusz zwiedzając „Dolinę dinozaurów” zobaczył dziwne, niezidentyfikowane znaki, napisane na piachu, 
które jak się okazało były ciągami liczb. Niestety żaden ze zwiedzających nie miał pojęcia, kto je tutaj zostawił. 
Zaistniała sytuacja bardzo zaintrygowała naszego bohatera, który przystąpił do badań nad zagadkowymi ciągami.

Mateusz po wielu próbach przekształcenia i usystematyzowania ciągów liczb doszedł do wniosku, że kolejne liczby ciągu tworzą pary 
(pierwsza liczba z drugą, trzecia z czwartą itd.), odpowiadające wysokości oraz grubości figury. Pary (wysokość, grubość) 
po niewielkim przekształceniu tworzą posegregowany ciąg liczb, z którego łatwo odczytać grubości rzeźb na odpowiedniej wysokości. 
Aby otrzymać tak uporządkowany ciąg nasz zdolny student doszedł do następujących wniosków. W związku z tym, że pary rzadko mają taką 
samą pierwszą współrzędną Mateusz zauważył, że sprytnym sposobem będzie posegregowanie serii par rosnąco względem właśnie tej współrzędnej.
Dodatkowo w sytuacji, gdy pierwsze współrzędne są równe, kolejność determinowana jest przez największy nietrywialny dzielnik drugiej 
współrzędnej (jeśli liczba nie ma takiego dzielnika to uznajemy, że jest równy jeden). Ta para, której druga współrzędna ma większy 
dzielnik jest wcześniej w ciągu. Pary, których pierwsze współrzędne oraz największe dzielniki drugich współrzędnych są równe powinny 
występować w ciągu wynikowym w kolejności takiej jak w oryginalnym ciągu.

Niestety w związku z tym, że Mateusz musi przygotować się do pracy, nie ma czasu by napisać program, 
który przekształci spisane przez niego ciągi liczbowe. Nasz bohater zwrócił się do Ciebie o pomoc w zaimplementowaniu tego algorytmu.

Algorytm przyjmuje na wejściu dowolną liczbę naturalną N, a następnie N liczb naturalnych D będących długościami ciągów. 
Po każdej wartości D program powinien przyjmować D liczb naturalnych tworzących jeden ciąg liczbowy do przekształcenia.

Przykład:
input:
 3
 6
 5 6 7 8 9 10
 8
 31 22 91 101 31 99 8 14
 24
 11 65 22 19 5 7 8 4 90 90 22 4 37 81 92 13 22 102 31 22 11 101 74 11
output:
 5 6 7 8 9 10
 8 14 31 99 31 22 91 101
 5 7 8 4 11 65 11 101 22 102 22 4 22 19 31 22 37 81 74 11 90 90 92 13
*/

#include <iostream>
#include <algorithm>

struct Coordinates {
    unsigned int x;
    unsigned int y;
};

unsigned int find_divider(unsigned int number) {
    for(unsigned int i = number / 2; i > 1; --i)
        if(number % i == 0)
            return i;
        return 1;
}

bool compare(Coordinates *p1, Coordinates *p2) {
    return !(p1->x > p2->x || p1->x == p2->x && find_divider(p1->y) < find_divider(p2->y));
}

void print_result(Coordinates **arr, unsigned int n) {
    for(unsigned int j = 0; j < n; ++j)
        std::cout << arr[j]->x << " " << arr[j]->y << " ";
    std::cout << std::endl;
}

void process_data(Coordinates **arr, unsigned int n) {
    unsigned int d;
    for(unsigned int i = 0; i < n; ++i) {
        std::cin >> d;
        d /= 2;
        arr = new Coordinates*[d];
        for(unsigned int j = 0; j < d; j++) {
            arr[j] = new Coordinates();
            std::cin >> arr[j]->x >> arr[j]->y;
        }
        std::sort(arr, arr+d, compare);
        print_result(arr,d);
    }
}

int main() {
    unsigned int n;
    Coordinates **arr;
    std::cin >> n;
    process_data(arr,n);
    return 0;
}