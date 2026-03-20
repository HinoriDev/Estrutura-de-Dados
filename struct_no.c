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

void removerInicio(struct No **head) {
    if (*head == NULL) return; //lista vazio

    struct No *temp = *head;
    *head = (*head)->prox;
    free(temp);
}

void inserirFim(struct No **head, int x) {
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo->valor = x;
    novo->prox = NULL; // será o ultimo nó

    if(*head == NULL) {
        *head = novo;
    }
    else {

        struct No *aux = *head;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

int main() {
    struct No *head = NULL; //Lista inicialmente vazia

    inserirFim(&head, 10);
    inserirFim(&head, 20);
    inserirFim(&head, 30);
    
    imprimir(head);

    return 0;
}
