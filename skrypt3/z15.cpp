//Zmodyfikuj poprzedni program tak, aby pokazywał fragment tej tabliczki – 
//trójkąt składający się z wyników niepowtarzających się działań (górny lub dolny do wyboru).


#include <iostream>
#include <iomanip>
int main() {
    const int size = 10;
    const int value_width = 4;
    const bool triangle = false;
    if (triangle)
        for (int i = 0; i <= size; ++i) {
            for (int j = 0; j <= i; ++j)
                std::cout << std::setw(value_width) << i * j;
            std::cout << std::endl;
        }
    else
        for (int i = 0; i <= size; ++i) {
            for (int j = 0; j < i; ++j)
                std::cout << std::setw(value_width) << ' ';
            for (int j = i; j <= size; ++j)
                std::cout << std::setw(value_width) << i * j;
            std::cout << std::endl;
        }
    return 0;
}