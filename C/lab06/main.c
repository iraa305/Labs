#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct name {
        double G;
        double F;
        double Y;
    } functions;

    struct name array[100];

    int j = 0, b = 0;
    char value[100];
    double a, x, min, max, step, z, d, l, v=0;

    printf("Введите границы изменения х.\nот:\n");
    scanf("%s", &value);
    min = atof(value);
    getchar();
    memset(value, 0, 100);

    printf("до:\n");
    scanf("%s", &value);
    max = atof(value);
    getchar();
    memset(value, 0, 100);

    printf("Введите а: ");
    scanf("%s", &value);
    a = atof(value);
    getchar();
    memset(value, 0, 100);

    printf("Для ввода кол-ва шагов нажмите 1,\n для ввода самого шага введите 2\n");
    scanf("%s", &value);
    b = atoi(value);
    getchar();
    memset(value, 0, 100);

    switch (b) {
        case 1:
            printf("Введите количество шагов:\n");
            scanf("%s", &value);
            step = atoi(value);
            v = (max - min) / (step - 1);
            getchar();
            memset(value, 0, 100);
            break;
        case 2:
            printf("Введите шаг\n");
            scanf("%s", &value);
            step = atoi(value);
            getchar();
            memset(value, 0, 100);
            break;
        default:
            printf("Вы ввели неправильное значение\n ");
            return -1;
    }

    x = min;

    while ((x <= max) && (j <= step)) {
        z = (27 * pow(x, 2) + 33 * a * x + 10 * pow(x, 2));
        if (fabs(z) < 10e-6) {
            printf("Не входит в область определения.\n");
        } else {
            array[j].G = -(8 * (7 * pow(a, 2) + 34 * a * x - 5 * pow(x, 2))) / z;
            printf("G = %.3lf\n", array[j].G);
        }
        j++;
        if (j > 100) {
            printf("Массив переполнен.");
            break;
        }
        x += v;
    }
    printf("\n=============================================================================\n");

    j = 0;

    x = min;

    while ((x <= max) && (j <= step)) {
        d = (sin(72 * pow(a, 2) - 5 * a * x - 12 * pow(x, 2) - M_1_PI / 2));
        if (fabs(d) < 10e-6) {
            printf("Не входит в область определения.\n");
        } else {
            array[j].F = -(1) / d;
            printf("F = %.3lf\n", array[j].F);
        }
        j++;
        if (j > 100) {
            printf("Массив переполнен.");
            break;
        }
        x += v;
    }
    printf("\n=============================================================================\n");

    j = 0;

    x = min;

    while ((x <= max) && (j <= step)) {
        l = (42 * pow(a, 2) + 53 * a * x + 15 * pow(x, 2) + 1);
        if (fabs(l) < 10e-6) {
            printf("Не входит в область определения.\n");
        } else {
            array[j].Y = log(42 * pow(a, 2) + 53 * a * x + 15 * pow(x, 2) + 1);
            printf("Y = %.3lf\n", array[j].Y);
        }
        j++;
        if (j > 100) {
            printf("Массив переполнен.");
            break;
        }
        x += v;
    }
}
