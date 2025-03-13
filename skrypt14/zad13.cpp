/*
Napisz funkcję w języku C++, która przyjmie obiekt std::vector oraz dwie wartości całkowite a i b. 
Funkcja powinna zwrócić obiekt std::vector zawierający liczby z wektora wejściowego znajdujące się w obustronnie otwartym zakresie (a, b). 
Napisz program w języku C++, który przetestuje działanie tej funkcji.
*/

#include <iostream>
#include <vector>
void print(std::vector<int>& v) {
    for(unsigned int i = 0; i < v.size(); ++i)
        std::cout << v.at(i) << " ";
    std::cout << "\n";
}
std::vector<int> get_rearrange_vector(const std::vector<int>& v, const int& a, const int& b) {
    std::vector<int> result;
    for(int value : v)
        if(value >= a && value <= b)
            result.push_back(value);
    return result;
}
int main() {
    int min = 3, max = 8;
    std::vector<int> v = {8, 4, 5, 9, 1, 2, 3};
    std::vector<int> result = get_rearrange_vector(v, min, max);
    print(result);
    return 0;
}