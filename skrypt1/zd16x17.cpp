#include <iostream>
int main() {
    long long A;
    int HPC, SPT, S, H, C;
    std::cin >> std::hex >> A >> std::dec >> HPC >> SPT;
    std::cout << A << std::endl;
    S = (A % SPT) + 1;
    A /= SPT;
    H = A % HPC;
    C = A / HPC;
    std::cout << "Wartości C, H, S: " << C << ' ' << H << ' ' << S << '\n';
    return 0;
}