#include <stdio.h>
#include <math.h>

int main()
{
    double x, a, z, d, l, G, F, Y;
    int c;

    printf("1: Расчет G\n2: Расчет F\n3: Расчет Y\n");
    scanf("%d", &c);

    switch (c) {
        case 1:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            z = (27 * pow(x, 2) + 33 * a * x + 10 * pow(x, 2));
            if (z != 0) {
                G = -(8 * (7 * pow(a, 2) + 34 * a * x - 5 * pow(x, 2))) / z;
                printf("G = %3lf\n", G);
            } else printf("Выберите другие значения для x и a");
            break;

        case 2:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            d = (sin(72 * pow(a, 2) - 5 * a * x - 12 * pow(x, 2) - M_1_PI / 2));
            if (d != 0) {
                F = -(1) / d;
                printf("F = %3lf\n", F);
            } else printf("Выберите другие значения для x и a");
            break;

        case 3:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            l = (42 * pow(a, 2) + 53 * a * x + 15 * pow(x, 2) + 1);
            if (l >= 0) {
                Y = log(42 * pow(a, 2) + 53 * a * x + 15 * pow(x, 2) + 1);
                printf("Y = %3lf\n", Y);
            } else printf("Выберите другие значения для x и a");
            break;

        default:
            printf("Вы выбрали не существующий вариант");
    }
    return 0;
}