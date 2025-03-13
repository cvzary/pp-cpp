#include <cstdio>

int main() {

    double p;
    unsigned int one_thread_time, hh, mm, ss, num_threads, parallel_time;

    scanf("%2d:%2d:%2d", &hh, &mm, &ss);
    scanf("%lf%d", &p, &num_threads);

    one_thread_time = 3600 * hh + 60 * mm + ss;
    p /= 100;

    parallel_time = one_thread_time * ((1 - p) + p / num_threads);
    hh = parallel_time / 3600;
    mm = (parallel_time % 3600) / 60;
    ss = parallel_time % 60;

    printf("Czas wykonania lagorytmu za pomoca %d, watkow wynosi: %02d:%02d:%02d.\n", num_threads, hh, mm, ss);

    return 0;
}