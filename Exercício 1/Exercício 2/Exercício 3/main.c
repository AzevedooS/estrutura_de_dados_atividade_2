//nome:Patrick dos Santos Azevedo
//Ra:2223108777

#include <stdio.h>

typedef struct {
    int codigo;
    char arquivo[30];
    int bytes;
} Documento;

int main() {
    Documento fila[5] = {
        {101, "trabalho.pdf", 1500},
        {102, "foto.png", 2200},
        {103, "relatorio.doc", 1800},
        {104, "planilha.xlsx", 2500},
        {105, "curriculo.pdf", 1300}
    };

    for (int i = 0; i < 5; i++) {
        printf("Imprimindo documento:\n");
        printf("Codigo: %d\n", fila[i].codigo);
        printf("Arquivo: %s\n", fila[i].arquivo);
        printf("Tamanho: %d bytes\n\n", fila[i].bytes);
    }

    return 0;
}
