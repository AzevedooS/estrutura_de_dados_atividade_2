//nome:Patrick dos Santos Azevedo
//Ra:2223108777

#include <stdio.h>

typedef struct {
    char nome[30];
    int idade;
} Pessoa;

int main() {
    Pessoa fila[5] = {
        {"Clara", 30},
        {"Marcos", 40},
        {"Maria", 70},
        {"Joao", 25},
        {"Vitoria", 68}
    };

    Pessoa atendimento[5];
    int pos = 0;

    // Primeiro os prioritários
    for (int i = 0; i < 5; i++) {
        if (fila[i].idade > 65) {
            atendimento[pos] = fila[i];
            pos++;
        }
    }

    // Depois os demais
    for (int i = 0; i < 5; i++) {
        if (fila[i].idade <= 65) {
            atendimento[pos] = fila[i];
            pos++;
        }
    }

    printf("Ordem de atendimento:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s - %d anos\n", atendimento[i].nome, atendimento[i].idade);
    }

    return 0;
}
