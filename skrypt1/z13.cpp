#include <iostream>
int main() {
    double file_size_mb, capacity, file_size_bits, file_size_control_bits,
    transmission_time;
    
    std::cin >> file_size_mb >> capacity;
    
    file_size_bits = file_size_mb * 8 * 1024 * 1024; // 1 MB = 8 * 1024 * 1024 bity
    file_size_control_bits = file_size_bits * (10.0 / 8.0); // dodajemy 2 bity do każdych 8
    transmission_time = file_size_control_bits / capacity / 1024 / 1024;
    
    std::cout << "Czas transmisji pliku wynosi: " << transmission_time << " sekund.\n";
    return 0;
}