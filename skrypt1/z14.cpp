#include <iostream>

int main() {

    double one_thread_time, p, parallel_time;
    int num_threads;

    std::cout << "Prosze podac kolejno:\n" << "czas wykonania algorytmu w jednym watku\n"
    << "udzial obliczen ktore mozna zrownoleglic\n" << "liczbe watkow: ";
    std::cin >> one_thread_time >> p >> num_threads;
    
    p /= 100;
    parallel_time = one_thread_time * ((1 - p) + p / num_threads);

    std::cout << "Czas wykonania jednego algorytmu za pomoca: " << num_threads << " watkow, wynosi: " 
    << parallel_time << " sekund \n";

    return 0;


}