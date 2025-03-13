/*Napisz program w języku C++, który obliczy sumę wszystkich elementów tablicy, jej średnie arytmetyczną,
 geometryczną i harmoniczną oraz odchylenie standardowe.*/

 #include <iostream>
 #include <cmath>

 float calculate_sum(int arr[], unsigned int n) {
    float sum = 0.f;
    for(unsigned int i = 0; i < n; ++i)
        sum += arr[i];

        return sum;
 }

 float calculate_arithmetic_mean(int arr[], unsigned int n) {
    return calculate_sum(arr,n) / n;
 }

 float calculate_geometric_mean(int arr[], unsigned int n) {
    float product = 1.f;
    for(unsigned int i = 0; i < n; ++i) 
        product *= arr[i];

    return std::pow(product, 1.f / n);
 }

 float calculate_harmonic_mean(int arr[], int n) {
    float reciprocal = 0.f;
    for(unsigned int i = 0; i < n; ++i)
        reciprocal += 1.f / arr[i];

    return n / reciprocal;
 }

 float calculate_std(int arr[], int n) {
    float sum_of_squares = 0.f;
    float mean = calculate_arithmetic_mean(arr,n);
    for(unsigned int i = 0; i < n; ++i) {
        sum_of_squares += std::pow(arr[i] - mean, 2);
    }
    return std::sqrt(sum_of_squares / n);
 }

 int main() {
    int arr[] = {5,4,2,6,1,5,9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::cout << "\nsuma: " << calculate_sum(arr,n) << std::endl;

    std::cout << "srednia arytmetyczna: " << calculate_arithmetic_mean(arr,n) << std::endl;
    
    std::cout << "srednia geometryczna: " << calculate_geometric_mean(arr,n) << std::endl;

    std::cout << "srednia harmoniczna: " << calculate_harmonic_mean(arr,n) << std::endl;

    std::cout << "odchylenie standardowe: " << calculate_std(arr,n) << std::endl;
    std::cout << std::endl;
    return 0;
 }