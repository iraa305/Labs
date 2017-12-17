#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {

    double a, x, z, l, G, F, Y, max, min, d, v;
    int c, step, b;

    printf("1: Расчет G\n2: Расчет F\n3: Расчет Y\n4: Выход\n");
    scanf("%d", &c);

    while ((c < 4) & (c > 0)) {

        printf("Введите границы изменения х.\nот:\n ");
        scanf("%lf", &min);
        printf("до:\n ");
        scanf("%lf", &max);

        printf("Введите a:\n");
        scanf("%lf", &a);

        printf("Для ввода кол-ва шагов нажмите 1,\n для ввода самого шага введите 2\n");
        scanf("%d", &b);

        switch (b) {
            case 1:
                printf("Введите количество шагов:\n");
                scanf("%d", &step);
                v = (max - min) / (step - 1);
                break;
            case 2:
                printf("Введите шаг\n");
                scanf("%lf", &v);
                break;
            default:
                printf("Вы ввели неправильное значение\n ");
                return -1;
        }

        switch (c) {
            case 1:
                x = min;
                printf("Вычисление G\n");
                while (x < max) {
                    z = (27 * pow(x, 2) + 33 * a * x + 10 * pow(x, 2)); //Находим знаменатель
                    if (z == 0) { //Если равен нулю, выводим ошибку//
                        printf("Не входит в область определения.\n");
                    } else {
                        G = -(8 * (7 * pow(a, 2) + 34 * a * x - 5 * pow(x, 2))) / z; //Расчитываем ф-ию
                        printf("G = %.3lf\n", G);
                        printf("%lf\n",x);
                    }
                    x += v;
                }
                break;

            case 2:
                x = min;
                printf("Вычисление F\n");
                while (x < max) {
                    d = (sin(72 * pow(a, 2) - 5 * a * x - 12 * pow(x, 2) - M_1_PI / 2));
                    if (d == 0) {
                        printf("Не входит в область определения.\n");
                    } else {
                        F = -(1) / d;
                        printf("F = %.3lf\n", F);
                    }
                    x += v;
                }
                break;

            case 3:
                x = min;
                printf("Вычисление Y\n");
                while (x < max) {
                    l = (42 * pow(a, 2) + 53 * a * x + 15 * pow(x, 2) + 1);
                    if (l <= 0) {
                        printf("Не входит в область определения.\n");
                    } else {
                        Y = log(42 * pow(a, 2) + 53 * a * x + 15 * pow(x, 2) + 1);
                        printf("Y = %.3lf\n", Y);
                    }
                    x += v;
                }
                break;
        }
        printf("1: Расчет G\n2: Расчет F\n3: Расчет Y\n4: Выход\n");
        scanf("%d", &c);
    }
    return 0;
}
