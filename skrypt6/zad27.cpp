/*Napisz program w języku C++, który wykona kopię napisu (tablicy znakowej) do innej tablicy znakowej
 – ekwiwalent funkcji bibliotecznej strcpy().*/

 #include <iostream>

 void my_strcpy(char dst[], char src[]) {
    for(unsigned int i = 0; src[i]; dst[i] = src[i], ++i);
 }

int main() {
    char str_0[100] = "Dlugosc napisu.", str_1[100] = {}; 
    my_strcpy(str_1, str_0);
    std::cout << str_1 << std::endl;
    return 0;
}