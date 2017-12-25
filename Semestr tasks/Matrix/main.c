#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int i, j, k, N;
    int A[100][100], B[100][100], C[100][100];
    double start, end, time_result[100];
    FILE *file;

    for(N=3;N<100;N++) {

        srand(time(NULL));

        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++) {
                A[i][j] = rand() % 10;
                B[i][j] = rand() % 10;
            }
        start = omp_get_wtime();
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++) {
                C[i][j] = 0;
                for (k = 0; k < N; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }
        end = omp_get_wtime();
        time_result[N] = end - start;}
    file = fopen("/home/irina/CLionProjects/result.txt", "w");
    for(N=3;N<100;N++)
        fprintf(file,"%lf\n",time_result[N]);
    fclose(file);
}