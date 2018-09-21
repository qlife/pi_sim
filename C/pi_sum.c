#define _POSIX_C_SOURCE 200809L
/* https://stackoverflow.com/questions/3756323/how-to-get-the-current-time-in-milliseconds-from-c-in-linux */
#include <inttypes.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int P = 1000000;
const int L = 10;
int pi_sum()
{
    int sum = 0;
    for(int p = 0; p < P; ++p) {
        double x,y;
        x = rand(); y = rand();
        if(1.0 > (x * x + y * y)) {
            sum ++;
        }
    }
    return ((double) sum / P) * 4.0;
}

int main()
{
    long ms_s, ms_e;
    struct timespec spec;

    clock_gettime(CLOCK_REALTIME, &spec);
    ms_s = round(spec.tv_nsec / 1.0e6) + spec.tv_sec * 1000;

    // Simulation starts
    for(int l = 0; l < L; ++l) {
        double r = pi_sum();
    }

    clock_gettime(CLOCK_REALTIME, &spec);
    ms_e = round(spec.tv_nsec / 1.0e6) + spec.tv_sec * 1000;
    printf("Time Consume in ms: %ld\n",  ms_e - ms_s);

    return EXIT_SUCCESS;
}