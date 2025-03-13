
//data_time.cpp
#include "data_time.h"
#include <iostream>
#include <chrono>
std::chrono::high_resolution_clock::time_point start;
void print_time() {
    auto now = std::chrono::system_clock::now();
    time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::cout << asctime(localtime(&now_c));
}
void start_measure() {
    start = std::chrono::high_resolution_clock::now();
}
void elapsed_measure() {
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start).count();
    std::cout << elapsed / 60.  << "s\n";
}