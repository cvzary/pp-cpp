#include <iostream>

int main() {
    int k;
    float a_k;
    float S_k;

    std::cout << "Prosze podac numer wyrazu (k): " << "\n";
    std::cin >> k;
    std::cout << "Prosze podac wartosc wyrazu ciagu(a_k): " << "\n";
    std::cin >> a_k;
    std::cout << "Prosze podac wartosc sumy k-wyrazow tego ciagu(S_k: )" << "\n";
    std::cin >> S_k;
    float a_1 = (2 * S_k / k) - a_k;
    std::cout << "Pierwszy wyraz tego ciagu wynosi: " <<  a_1 << std::endl;


    return 0;
}