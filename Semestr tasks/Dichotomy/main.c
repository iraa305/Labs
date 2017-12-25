#include <stdio.h>
#include <math.h>

double F(double x){
    return x*x*x-3*x+1;
}

int main(){
    double a, b, c, eps;
    printf("Введите 1-ую границу интервала: ");
    scanf("%lf", &a);
    printf("Введите 2-ую границу интервала: ");
    scanf("%lf", &b);
    eps = 0.0001;
    do{
        c = (a + b) / 2;
        if (F(c) * F(a) < 0)
            a = c;
        else b = c;

    }while (fabs(a - b) >= eps);
    printf("Минимум функции на заданном интервале = %lf\n", c);
    return 0;
}
