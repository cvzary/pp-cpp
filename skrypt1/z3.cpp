/*
#include <cstdio>
int main() {
  int dval= 30; 
  printf("decimal %d, octal %o, hexadecimal %x\n", dval, dval, dval);
  return 0;
}
*/

#include <iostream> 

int main() {
    int dval;
    std::cout << "podaj liczbe calkowita: ";
    std::cin >> dval;
    std::cout << "\ndecimal: " << dval << "\noctal: " << std::oct << dval << 
    "\nhexadecimal : " << std::hex << dval;
    std::cout << std::dec; // przywraca system dziesietny
    return 0;
}