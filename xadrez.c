#include <stdio.h>

// Definição das constantes de direção
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

int main() {
    // Variáveis para armazenar os movimentos
    int i;

    // Movimentação do Bispo - 5 casas na diagonal superior direita
    printf("Movimento do Bispo:\n");
    for (i = 0; i < 5; i++) {
        printf("%s e %s\n", CIMA, DIREITA); // Movendo para Cima e Direita
    }

    // Movimentação da Torre - 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", DIREITA); // Movendo apenas para a Direita
    }

    // Movimentação da Rainha - 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    for (i = 0; i < 8; i++) {
        printf("%s\n", ESQUERDA); // Movendo apenas para a Esquerda
    }

    return 0;
}