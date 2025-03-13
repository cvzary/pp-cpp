/*Napisz funkcję w języku C++, która przyjmuje w argumencie liczbę całkowitą dodatnią x oraz liczbę naturalną n,
 a następnie ustawia n-ty bit liczby x na 1. Napisz drugą podobną funkcję, która wyłącza wybrany bit w liczbie x. 
 Napisz trzecią funkcję, która ustawia wskazany bit na przeciwny. */

 #include <iostream>

 void set_bit(unsigned int &x, unsigned int n) {
    x |= (1 << n);
 }

 void unset_bit(unsigned int &x, unsigned int n) {
    x &= ~(1 << n);
 }
void negate_bit(unsigned int &x, unsigned int n) {
    x ^= (1 << n);
}
 
int main() {
    unsigned int num = 10; //1010b
    set_bit(num, 0);
    std::cout << num << std::endl; //11(d)
    negate_bit(num, 1);
    std::cout << num << std::endl; //9(d)
    unset_bit(num, 3);
    std::cout << num << std::endl; //1(d)
    return 0;
}