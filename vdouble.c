#include <stdio.h>

int dobro(int n) {
    n = n*2;

    return n;
}

int main() {
    int i;
    int v[5];

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nValores digitados:\n");
    for(i=0;i<5;i++) {
        printf("%d\n", v[i]);
    }

    v[i] = dobro(v[i]);

    printf("%d\n", v[i]);

    return 0;
}