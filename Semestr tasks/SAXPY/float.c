#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main() {
    float x[200];
    double timer[100000], start, stop;
    int i = 0;
    float x2, y, y2, a;

    FILE *f;
    srand(time(NULL));
    start = omp_get_wtime();

    a = (float) rand() / RAND_MAX * (float) 50.0;
    x2 = (float)rand()/RAND_MAX * (float)50.0;
    y = (float)rand()/RAND_MAX * (float)50.0;

    y2 = a * x2 + y;

    for (i = 0; i < 100000; i++) {
        x[i] = (float) rand() / 100;
    }

    f = fopen("/home/irina/1.log", "w");
    for (i = 0; i < 100; i++) {
        stop = omp_get_wtime();
        timer[i] = stop - start;
        fprintf(f, "%f\n", timer[i]);
    }
    fclose(f);
    return 0;
}