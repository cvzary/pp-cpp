/*
Napisz program w języku C++, który zdefiniuje typ złożony Person mający dwa pola: liczbę całkowitą – age, napis – name. 
Program powinien stworzyć obiekt tego typu, a następnie stworzyć jego głęboką kopię.
*/

#include <iostream>
#include <cstring>


struct Person{
    short age;
    char *name;
};

int main() {
    const char *emil = "Emil";
    Person p1;
    p1.age = 20;
    p1.name = new char[24];
    strcpy(p1.name, emil); // strcpy(p1.name, "Emil");

    Person p2 = p1;
    // std::cout << "Age: " << p2.age << " , Name: " << p2.name << std::endl;
    // //To ten sam adres p1.name i p2.name
    // delete[] p1.name;
    // std::cout << "Age: " << p2.age << " , Name: " << p2.name << std::endl;
    // //blad
    p2.name = new char[24]; //Teraz to już inny adres niż p1.name
    strcpy(p2.name, p1.name);
    std::cout << "Age: " << p2.age << ", Name: " << p2.name << std::endl;  
    delete[] p1.name;
    std::cout << "Age: " << p2.age << ", Name: " << p2.name << std::endl;  
    return 0;
}