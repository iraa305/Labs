#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#define SIZE 5000

struct points /* Тут хранятся все точки*/
{
    double x[SIZE];
    double y[SIZE];
};

struct main_point /*Относительно этих точек проверяется принадлежность*/
{
    double x2;
    double y2;
};

struct points get_random_array(void) /*Функция генерации случайных чисел в заданном диапазоне*/
{
    struct points array;
    int i = 0;
    srand(time(NULL));

    for (i = 0; i < SIZE; i++) {
        array.x[i] = (double) rand() / RAND_MAX * (10.0 + 10.0);
        array.y[i] = (double) rand() / RAND_MAX * (10.0 + 10.0);
    }
    return array;
}

int belong_to_region(struct main_point one_p, struct main_point all_p, double radius){ /*Функция проверки принадлежности области*/
    double distance;
    distance = sqrt((pow(2, one_p.x2-all_p.x2))+pow(2,one_p.y2-all_p.y2));
    if (distance <= radius)
        return 1;
    else
        return 0;
}

int amountOfPoints(double rad)/*Функция получения кол-ва точек в окресности*/
{
    struct main_point thePoint, allPoints;
    struct points mass;
    int counter = 0;
    int i = 0, choice = 0;
    srand(time(NULL));

    choice = rand() % SIZE;

    mass = get_random_array();
    thePoint.x2 = mass.x[choice];
    thePoint.y2 = mass.y[choice];

    for (i = 0; i < SIZE; i++)
    {
        allPoints.x2 = mass.x[i];
        allPoints.y2 = mass.y[i];
        if (belong_to_region(thePoint,allPoints,rad) == 1)
        {
            counter++;
        }
    }
    if (counter != 0)
    {
        counter = counter - 1;
    }
    return counter;
}

int main()
{
    FILE* output;
    double radius,start,end;

    printf("Введите радиус окрестности: ");
    scanf("%lf", &radius);
    start = omp_get_wtime();
    printf("Количество точек в заданной окрестности: %d\n", amountOfPoints(radius));
    end = omp_get_wtime();
    printf("Время выполнения программы: %lf\n", end - start);
    output = fopen("/home/irina/CLionProjects/lab08/output.txt", "w");
    fprintf(output,"%lf\n",end - start);
    fclose(output);
    return 0;
}