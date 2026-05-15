//nome:Patrick dos Santos Azevedo
//Ra:2223108777

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char cpf[15];
    char nascimento[11];
    char motivo[10];
} Pessoa;

int main() {
    Pessoa fila[5] = {
        {"Clara", "111", "10/01/2000", "Reclamar"},
        {"Marcos", "222", "15/02/1998", "Elogiar"},
        {"Maria", "333", "20/03/1995", "Reclamar"},
        {"Joao", "444", "05/04/2001", "Elogiar"},
        {"Vitoria", "555", "12/05/1999", "Reclamar"}
    };

    int reclamar = 0, elogiar = 0;

    for (int i = 0; i < 5; i++) {
        if (strcmp(fila[i].motivo, "Reclamar") == 0)
            reclamar++;
        else
            elogiar++;
    }

    if (elogiar < reclamar)
        printf("Na fila de hoje tivemos %d pessoas que vieram elogiar e %d para reclamar.", elogiar, reclamar);
    else
        printf("Na fila de hoje tivemos %d pessoas que vieram reclamar e %d para elogiar.", reclamar, elogiar);

    return 0;
}
