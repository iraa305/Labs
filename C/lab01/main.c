//10.4
#include <stdio.h>
#include <malloc.h>

int main()
{
    int *a;
    int i;
    a = (int*)malloc(10 * sizeof(int));
    for (i = 0; i <= 20; i++)
        printf("%d %d\n", i, i*i);
    free(a);
    return 0;
}

//10.5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("Введите количество товаров: ");
    scanf("%i", &n);

    struct storage{
        char name[10];
        double weight;
        int price;
    };
    struct storage* data = (struct storage*)malloc(sizeof(struct storage) * n);

    for(i = 0; i < n; i++)
    {
        printf("Введите название товара:\n");
        scanf("%s", &data[i].name);

        printf("Введите вес товара:\n");
        scanf("%lf", &data[i].weight);

        printf("Введите цену товара:\n");
        scanf("%d", &data[i].price);
    }

    for(int i = 0; i < n; i++)
    {
        printf("Название: %s Вес: %lf Цена: %d\n", data[i].name, data[i].weight, data[i].price);
    }

    free(data);

    return 0;
}

//10.6
#include <stdio.h>
#include <string.h>

char* allVowels(char* source, char* result) {
    static const char CVowels[] = "EYUIOAeyuioa";
    char* pstr = result;

    for (; *source; ++source) {
        if (strchr(CVowels, *source)) {
            *pstr++ = *source;
        }
    }
    *pstr = 0;

    return result;
}

int main() {
    char source[256], result[256];

    printf("text: ");
    fgets(source, sizeof(source), stdin);

    printf("vowels: %s\n", allVowels(source, result));

    return 0;
}
