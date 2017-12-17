#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int c = 1, b, counter = 0;
    long int j = 0, step = 0;
    double a, x, l, G, F, Y, max, min, v, d, z;
    double mas[100];
    char begin[200], end[800], template[100], stepstr[300], resultstring[300], *key;

    while ((c < 4) & (c > 0)) {

        printf("\n1: Расчет G\n2: Расчет F\n3: Расчет Y\n4: Выход\n");
        scanf("%d", &c);
        memset(begin, 0, 200);
        memset(end, 0, 800);

        if (c == 4) {
            break;
        }

        printf("Введите границы изменения х.\nот:\n ");
        scanf("%s", &begin);
        min = atof(begin);
        memset(begin, 0, 200);

        printf("до:\n ");
        scanf("%s", &begin);
        max = atof(begin);
        memset(begin, 0, 200);

        printf("Введите a:\n");
        scanf("%s", &begin);
        a = atof(begin);
        memset(begin, 0, 200);

        printf("Для ввода кол-ва шагов нажмите 1,\n для ввода самого шага введите 2\n");
        scanf("%s", &begin);
        b = atoi(begin);
        memset(begin, 0, 200);

        switch (b) {
            case 1:
                printf("Введите количество шагов:\n");
                scanf("%s", &stepstr);
                step = atoi(stepstr);
                v = (max - min) / (step - 1);
                memset(begin, 0, 200);
                break;
            case 2:
                printf("Введите шаг\n");
                scanf("%s", &stepstr);
                step = atoi(step);
                memset(begin, 0, 200);
                break;
            default:
                printf("Вы ввели неправильное значение\n ");
                return -1;
        }
        if (step > 100) {
            break;
        }

        x = min;

        switch (c) {
            case 1:
                while ((x <= max) && (j <= step)) {
                    z = (27 * pow(x, 2) + 33 * a * x + 10 * pow(x, 2)); //Находим знаменатель
                    if (fabs(z) < 10e-6) { //Если равен нулю, выводим ошибку//
                        printf("Не входит в область определения.\n");
                    } else {
                        G = -(8 * (7 * pow(a, 2) + 34 * a * x - 5 * pow(x, 2))) / z; //Расчитываем ф-ию
                        printf("x = %.3lf\t", x);
                        printf("G = %.3lf\n", G);
                    }
                    x += v;
                    mas[j] = G;
                    j++;
                }
                break;

            case 2:
                while ((x <= max) && (j <= step)) {
                    d = (sin(72 * pow(a, 2) - 5 * a * x - 12 * pow(x, 2) - M_1_PI / 2));
                    if (fabs(d) < 10e-6) {
                        printf("Не входит в область определения.\n");
                    } else {
                        F = -(1) / d;
                        printf("x = %.3lf\t", x);
                        printf("F = %.3lf\n", F);
                    }
                    x += v;
                    mas[j] = F;
                    j++;
                }
                break;
            case 3:
                while ((x <= max) && (j <= step)) {
                    l = (42 * pow(a, 2) + 53 * a * x + 15 * pow(x, 2) + 1);
                    if (fabs(l) < 10e-6) {
                        printf("Не входит в область определения.\n");
                    } else {
                        Y = log(42 * pow(a, 2) + 53 * a * x + 15 * pow(x, 2) + 1);
                        printf("x = %.3lf\t", x);
                        printf("Y = %.3lf\n", Y);
                    }
                    x += v;
                    mas[j] = Y;
                    j++;
                }
                break;

            default:
                printf("Неправильно выбрана функция.");
        }


        for (j = 0; j <= step; j++) {
            sprintf(begin, "%lf", mas[j]);
            strcat(resultstring, begin);
        }
        printf("%s", resultstring);
        j = 0;

        printf("\nВведите шаблон:\n");
        scanf("%s", &template);
        key = strstr(resultstring, template);

        while (key) {
            sprintf(resultstring, key + 1);
            counter++;
            key = strstr(resultstring, template);
        }
        printf("Кол-во совпадений = %d", counter);
    }
    return 0;
}