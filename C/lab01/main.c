#include <stdio.h> //стандартный заголовочный файл ввода-вывода
#include <math.h> //импортирование математической библиотеки
int main() {
    double x, a, G, F, Y;
    printf("Enter x:"); //Ввод числа x
    scanf("%lf", &x); //Считывание введенной данной a
    printf("Enter a:");//Ввод числа a
    scanf("%lf", &a);//Считывание введенной данной x
    G = -(8*(7*pow(a, 2) + 34*a*x - 5*pow(x, 2)))/(27*pow(x, 2) + 33*a*x + 10*pow(x, 2)); //вычисление формулы и присвоение G
    printf("G=%f\n\n", G); //вывод результата присвоения

    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter a:");
    scanf("%lf", &a);
    F = -(1)/(sin(72*pow(a, 2) - 5*a*x - 12*pow(x, 2) - M_1_PI/2));
    printf("F=%f\n\n", F);

    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter a:");
    scanf("%lf", &a);
    Y = log(42*pow(a, 2) + 53*a*x + 15*pow(x, 2)+1);
    printf("Y=%f\n\n", Y);
    return 0;
}