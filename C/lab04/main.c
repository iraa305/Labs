#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {

    double a, x, z, l, G = 0, F = 0, Y = 0, max, min, d, v, min_value, max_value;
    int c = 1, step = 0, b;
    int j = 0;
    double mas[100];

    while ((c < 4) & (c > 0)) {

        printf("1: Расчет G\n2: Расчет F\n3: Расчет Y\n4: Выход\n");
        scanf("%d", &c);

        if (c == 4){
            break;
        }

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
        if (step > 100){
            break;
        }
    x = min;
    switch (c) {
        case 1:
            while (x <= max & j <= step) {
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
                j ++;
            }
            break;

        case 2:
            printf("Вычисление F\n");
            while (x <= max & j <= step) {
                d = (sin(72 * pow(a, 2) - 5 * a * x - 12 * pow(x, 2) - M_1_PI / 2));
                if (fabs(d) < 10e-6) {
                    printf("Не входит в область определения.\n");
                } else {
                    F = -(1) / d;
                    printf("x = %lf\t", x);
                    printf("F = %.3lf\n", F);
                }
                x += v;
                mas[j] = F;
                j ++;
            }
            break;

        case 3:
            while (x <= max & j <= step) {
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
                    j ++;
                }
                break;

        default:
                    printf("Неправильно выбрана функция.");

            }
        for (min_value =  mas[0], max_value = mas[0],j = 0;j < step;j++){
            if (mas[j] > max_value)
                max_value = mas[j];
            if (mas[j] < min_value)
                min_value = mas[j];
        }
        printf(" Максимальное значение = %9.3lf\n Минимальное значение = %9.3lf\n", max_value, min_value);
    }
    return 0;
}
