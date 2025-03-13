/*Napisz program w języku C++, który zamieni reprezentację znakową liczby całkowitej bez znaku (string) na zmienną typu liczby całkowitej
 – ekwiwalent funkcji bibliotecznej atoi(). */

 #include <iostream>
 using namespace std;

 unsigned int number_len(const char str[]) {
    unsigned int result = 0;
    for(;str[result] >= '0' && str[result] <= '9'; ++result);
    return result;
 }

    int my_atoi(char str[]) {
        unsigned int tmp = pow(10,number_len(str) - 1), i = 0;
        int result = 0;
        do result += (str[i++] - '0') * tmp; while(tmp /= 10);
        return result;
    }

int main() {
    char str[100] = "267ab";
    std::cout << number_len(str) << std::endl;
    int result = my_atoi(str);
    std::cout << result << std::endl;
    return 0;
}