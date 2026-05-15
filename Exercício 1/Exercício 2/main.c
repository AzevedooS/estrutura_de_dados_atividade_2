//nome:Patrick dos Santos Azevedo
//Ra:2223108777

#include <stdio.h>

typedef struct {
    char nome[30];
    int tempo;
} Pessoa;

int main() {
    Pessoa fila[5] = {
        {"Clara", 10},
        {"Marcos", 7},
        {"Maria", 9},
        {"Joao", 6},
        {"Vitoria", 12}
    };

    int soma = 0;
    float media;

    for (int i = 0; i < 5; i++) {
        soma += fila[i].tempo;
    }

    media = soma / 5.0;

    printf("Media de atendimento: %.2f minutos\n", media);

    if (media > 8)
        printf("Recomenda-se abrir um novo caixa.\n");
    else
        printf("Nao ha necessidade de abrir um novo caixa.\n");

    return 0;
}
