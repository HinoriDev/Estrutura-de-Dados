<include <stdio.h>

int main() {
    int i;
    int v[10];

    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i];)
    }

    printf("\nValores digitados:\n");
    for(i=0;i<10;i++) {
        printf("%d", v[i]);
    }
    return 0;
}