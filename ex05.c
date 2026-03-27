//elabora uma função que verifique se um dado valor existe na lista.
//caso exista, retorne com um ponteiro indicando-o na lista, caso contrário, este ponteiro será NULL.
//Ao procurar o valor retornar TRUE ou FALSE 

#include<stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

void inserirInicio(struct No **head, int x) {
    struct No *novo = malloc (sizeof(struct No));
    novo->valor = x;
    novo->prox = *head;
    *head = novo;
}

void imprimir(struct No *head) {
    struct No *aux = head;
    while (aux != NULL) {
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }
    printf("NULL\n");
}

int buscar(struct No *head, int valor) {
    struct No *aux = head;

    while (aux != NULL) {
        if (aux->valor == valor) {
            return 1; // encontrou
        }
        aux = aux->prox;
    }
    return 0; // não encontrou
}

int main() {
    struct No *head = NULL;

    inserirInicio(&head, 10);
    inserirInicio(&head, 20);
    inserirInicio(&head, 30);
    
    imprimir(head);

    if (buscar(head, 14)) {
        printf("Valor encontrado!\n");
    } else {
        printf("Valor nao encontrado!\n");
    }

    return 0;
}
