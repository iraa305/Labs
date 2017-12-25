#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main() {
    double x[200];
    double timer[100000], start, stop;
    int i = 0;
    double x2, y, y2, a;

    FILE *f;
    srand(time(NULL));
    start = omp_get_wtime();

    a = (double) rand() / RAND_MAX * (double) 50.0;
    x2 = (double)rand()/RAND_MAX * (double)50.0;
    y = (double)rand()/RAND_MAX * (double)50.0;

    y2 = a * x2 + y;

    for (i = 0; i < 100000; i++) {
        x[i] = (double) rand() / 100;
    }

    f = fopen("/home/irina/2.log", "w");
    for (i = 0; i < 100; i++) {
        stop = omp_get_wtime();
        timer[i] = stop - start;
        fprintf(f, "%f\n", timer[i]);
    }
    fclose(f);
    return 0;
}