/*Napisz funkcje w języku C++, które obliczają: a) sumę wektorów, b) różnicę wektorów, 
c) iloczyn wektora przez skalar, d) iloczyn skalarny wektorów, e) iloczyn wektorowy wektorów w trójwymiarowej przestrzeni euklidesowej. 
Napisz program w języku C++, który przetestuje działanie tych funkcji.*/

#include <iostream>

float* add(const float* v1, const float* v2, int n) {
    float* result = new float[n];
    for (int i = 0; i < n; ++i)
        result[i] = v1[i] + v2[i];
    return result;
}

float* sub(const float* v1, const float* v2, int n) {
    float* result = new float[n];
    for (int i = 0; i < n; ++i)
        result[i] = v1[i] - v2[i];
    return result;
}

float* mul(const float* v1, float s, int n) {
    float* result = new float[n];
    for (int i = 0; i < n; ++i)
        result[i] = v1[i] * s;
    return result;
}

float dot(const float* v1, const float* v2, int n) {
    float result = 0.f;
    for (int i = 0; i < n; ++i)
        result += v1[i] * v2[i];
    return result;
}

float* cross(const float* v1, const float* v2) {
    float* result = new float[3];
    result[0] = v1[1] * v2[2] - v1[2] * v2[1];
    result[1] = v1[2] * v2[0] - v1[0] * v2[2];
    result[2] = v1[0] * v2[1] - v1[1] * v2[0];
    return result;
}

void print_vector(const float* vector, int n) {
    for (int i = 0; i < n; ++i)
        std::cout << vector[i] << " ";
    std::cout << std::endl;
}

int main() {
    const int n = 3;
    float v[] = {1.1f, 2.2f, 3.3f};
    float u[] = {1.f, 2.f, 1.f};
    float s = 3.f;

    float* sum = add(v, u, n);
    float* diff = sub(v, u, n);
    float* scaled = mul(v, s, n);
    float scalar_product = dot(v, u, n);
    float* vector_product = cross(v, u);

    std::cout << "Sum: ";
    print_vector(sum, n);

    std::cout << "Difference: ";
    print_vector(diff, n);

    std::cout << "Scaled: ";
    print_vector(scaled, n);

    std::cout << "Dot product: " << scalar_product << std::endl;

    std::cout << "Cross product: ";
    print_vector(vector_product, n);

    delete[] sum;
    delete[] diff;
    delete[] scaled;
    delete[] vector_product;

    return 0;
}