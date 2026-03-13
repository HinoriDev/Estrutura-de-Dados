#include <stdio.h>

int main() {
    int soma;
    float media;
    int i;
    int v[10];

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
    }

    for (i=0; i<10; i++) {
        soma += v[i];
    }
        printf("%d\n", soma);

        media = soma/10;

        printf("%f\n", media);
    
    return 0;
}