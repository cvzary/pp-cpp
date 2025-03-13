/*Napisz funkcję w języku C++, która przyjmie w argumencie dwie 3-elementowe tablice liczb zmiennoprzecinkowych (interpretowane
 jako wektory 3d) a zwróci tablicę będącą iloczynem wektorowym wejściowych wektorów.*/
#include <iostream>

 void cross_product(const float vec_0[], const float vec_1[], float result[]) 
{
    result[0] = vec_0[1] * vec_1[2] - vec_0[2] * vec_1[1];
    result[1] = vec_0[2] * vec_1[0] - vec_0[0] * vec_1[2];
    result[2] = vec_0[0] * vec_1[1] - vec_0[1] * vec_1[0];
}

int main() {
    float vec_0[3] = {1,2,3}, vec_1[3] = {4,5,6}, result[3] = {};

    cross_product(vec_0,vec_1,result);
    std::cout << result[0] << std::endl;
    std::cout << result[1] << std::endl;
    std::cout << result[2] << std::endl;

    return 0;
}