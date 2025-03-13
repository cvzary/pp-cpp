//Kalendarz gregoriański, znajdujący się obecnie w powszechnym użyciu, został wprowadzony w piątek, 15 października 1582 roku.
//Korzystając z tej wiedzy, napisz program, który dla tej i każdej kolejnej daty wyświetli odpowiadający jej dzień tygodnia.
//Data powinna być podana w formacie dd.MM.yyyy. W zadaniu zdefiniuj i wykorzystaj typ wyliczeniowy Weekday {Monday, Tuesday, …, Sunday}.

#include <cstdio>
int main() {
    unsigned int dd, mm, yy, century, year_of_century, result;
    
    scanf("%2d.%2d.%4d", &dd, &mm, &yy);
    
    if (mm < 3) {
        mm += 12;
        --yy;
    }
    century = yy / 100;
    year_of_century = yy % 100;
    result = (dd + (13 * (mm + 1) / 5) + year_of_century + (year_of_century / 4) + (century / 4) - 2 * century) % 7;

    switch (result) {
        case 2:
            printf("Poniedziałek\n");
            break;
        case 3:
            printf("Wtorek\n");
            break;
        case 4:
            printf("Środa\n");
            break;
        case 5:
            printf("Czwartek\n");
            break;
        case 6:
            printf("Piątek\n");
            break;
        case 0:
            printf("Sobota\n");
            break;
        case 1:
            printf("Niedziela\n");
            break;
    }
    return 0;
}

