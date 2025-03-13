//Napisz program w języku C++, który stworzy stałą zmienną N, 
//a następnie wyświetli jej wartość. 
//(Próby zmiany wartości tej zmiennej powinny zakończyć się błędem kompilacji.)

#include <iostream>



int main() {
   
    const int N = 10;
    std::cout << N <<std::endl;
    
    return 0;
}