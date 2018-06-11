//12.2
#include<stdio.h>
#include<string.h>

#define N 81
#define M 81

int main( void ) {
    char str[N], letter[M];
    int i, j, x, k = 0;
    printf("Строка:\n");
    gets(str);
    printf("Буква:\n");
    gets(letter);
    x=strlen(letter);
    for (i = 0; i < strlen(str); i++) {
        for (j = 0; letter[j] != '\0'; j++){
            if (str[i] == letter[j]) {
                k++;
                break;
            }
        }
    }
    printf( "Кол-во = %d", k/x );
    return 0;
}
