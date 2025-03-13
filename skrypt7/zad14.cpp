/*Napisz program w języku C++, który pobierze od użytkownika i wyświetli tablicę liczb całkowitych (o konkretnym, ustalonym rozmiarze)
 na 4 sposoby:

1) klasycznie, za pomocą operacji wejścia (oba scanf() i std::cin) po uruchomieniu programu,

2) za pomocą parametrów wywołania programu (wykorzystaj argumenty funkcji main(int argc, char* argv[]))
#./a.out 1 2 3 4 5

3) wczytania z linii poleceń tablicy podanej w string-u za pomocą operatora here-string '<<<' powłoki bash linuxa,
#./a.out <<< "1 2 3 4 5"

4) wczytania z pliku tekstowego za pomocą programu 'cat' i operatora pipeline '|' powłoki bash linuxa.
#cat plik_z_liczbami.txt | ./a.out*/

// Version 1.0
#include <iostream>
#include <cstdio>
void inputArrayWithScanf(int array[], int size) {
    for (int i = 0; i < size; ++i) scanf("%d", &array[i]);
}
void inputArrayWithCin(int array[], int size) {
    for (int i = 0; i < size; ++i) std::cin >> array[i];
}
void printArray(const int array[], int size) {
    for (int i = 0; i < size; ++i) std::cout << array[i] << " "; std::cout << std::endl;
}
int main() {
    const int size = 5;
    int numbers[size];
    inputArrayWithScanf(numbers, size);
    printArray(numbers, size);
    
    inputArrayWithCin(numbers, size);
    printArray(numbers, size);
    return 0;
}

/*

// Version 2.0
#include <iostream>
#include <cstdlib>
void inputArrayFromArgs(int array[], int size, char* argv[]) {
    for (int i = 0; i < size; ++i) array[i] = std::atoi(argv[i + 1]);
}
int main(int argc, char* argv[]) {
    const int size = 5;
    int numbers[size];
    if (argc != size + 1) {
        std::cerr << "Usage: ./a.out 1 2 3 4 5" << std::endl;
        return 1;
    }
    inputArrayFromArgs(numbers, size, argv);
    for (int i = 0; i < size; ++i)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
    return 0;
}


// Version 3.0
#include <iostream>
#include <cstring>
#include <cstdlib>
void inputArrayFromHereString(int array[], int size, char* inputString) {
    char* token = std::strtok(inputString, " ");
    for (int i = 0; i < size && token != nullptr; ++i) {
        array[i] = std::atoi(token);
        token = std::strtok(nullptr, " ");
    }
}
int main() {
    const int size = 5;
    int numbers[size];
    char inputString[100];
    std::cin.getline(inputString, 100);
    inputArrayFromHereString(numbers, size, inputString);
    for (int i = 0; i < size; ++i)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
    return 0;
}

// Version 4.0
#include <iostream>
void inputArrayFromPipeline(int array[], int size) {
    for (int i = 0; i < size; ++i) std::cin >> array[i];
}
int main() {
    const int size = 5;
    int numbers[size];
    inputArrayFromPipeline(numbers, size);
    for (int i = 0; i < size; ++i)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;
    return 0;
}

*/