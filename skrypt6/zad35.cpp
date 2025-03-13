/*Napisz program w języku C++, wyszuka w napisie wszystkie liczby a następnie na ekranie poda ich sumę. 
Zakładamy, że w napisie może się znajdować dowolna ilość liczb całkowitych i są zawsze odseparowane od reszty znaków symbolem spacji. */

// WEJŚCIE: "Ala ma 5 kotow, 3 psy i 19 myszek"
// WYJŚCIE: 27

#include <iostream>

int sum_all_string_values(const char str[]) {
    int result = 0, number = 0;
    bool is_negative = false;
        for(unsigned int i = 0; str[i]; ++i) {
            if(str[i] == '-' && str[i+1] && str[i+1] >= '1' && str[i+1] <= '9')
                is_negative = true;
            else if(str[i] >= '1' && str[i] <= '9')
                number = number * 10 + (str[i] - '0');
            else if(number != 0) {
                if(is_negative) number *= -1;
                result += number;
                number = 0;
                is_negative =false;
            }
        }
        if(number != 0) {
            if(is_negative) number *= -1;
            result += number;
        }
        return result;
}

int main() {
    char str[100] = "AcK 26 7ab 8 fsakf -1";
    int result = sum_all_string_values(str);
    std::cout << result << std::endl;
    return 0;
}