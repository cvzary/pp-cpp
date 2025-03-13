#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n; // warunek bazowy dla n=0 i n=1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // wywołania rekurencyjne
    }
}

int main() {
    int n = 5;
    std::cout << "Fibonacci rekurencyjny (" << n << "): " << fibonacci(n) << std::endl;
    return 0;
}