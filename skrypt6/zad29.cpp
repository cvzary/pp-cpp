/*Napisz program w języku C++, który wyszuka pierwsze wystąpienie pojedynczego znaku w napisie i wypisze liczbę całkowitą równą pozycji
 tego znaku w napisie lub wartość (-1) jeżeli takiego podciągu nie ma. Jest to ekwiwalent funkcji bibliotecznej strchr().*/

 #include <iostream>
unsigned int my_strchr(char str_0[], char c) {
    for(unsigned int i = 0 ;str_0[i]; ++i)
        if(str_0[i] == c)
            return i;
    return -1;
}
int main() {
    char str[100] = "Dlugosc napisu."; 
    std::cout << my_strchr(str, 's') << std::endl;
    return 0;
}