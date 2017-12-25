#include<stdio.h>

int main() {
    double x,root;
    printf("Введите число: ");
    scanf("%lf", &x);
    root=x;
    while (root*root!=x){
        root = (root + (x/root))/2;
    }
    printf("Квадратный корень числа равен: %.3lf", root);
    return 0;
}