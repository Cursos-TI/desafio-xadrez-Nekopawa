#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


//recursividade e também loops aninhados, utilizando o loop mais externo para o movimento vertical, 
//e o mais interno para o movimento horizontal.
void bispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima\tDireita\n");
        bispoRecursivo(casas - 1);
    }
}

void torreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        torreRecursivo(casas - 1);
    }
}

void rainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        rainhaRecursivo(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // *-- Variáves das peças--*
    // Bispo: 5 casas na diagonal superior direita
    const int casasBispo = 5;

    // Torre: 5 casas para a direita
    const int casasTorre = 5;

    // Rainha: 8 casas para a esquerda
    const int casasRainha = 8;

    // Cavalo: 1 vez em L para cima à direita
    const int casasCavalo = 1;

    printf("\n\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("*** Movimento bispo ***\n");
    for (int i = 0; i < casasBispo; i++) {
        printf("Cima Direita\n");
    }    
    
    printf("\n\n");
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("*** Movimento torre ***\n");
    int posicaoTorre = 0;
    while (posicaoTorre < casasTorre) {
        printf("Direita\n");
        posicaoTorre++;
    }

    printf("\n\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("*** Movimento rainha ***\n");
    int posicaoRainha = 0;
    do {
        printf("Esquerda\n");
        posicaoRainha++;
    } while (posicaoRainha < casasRainha);

    printf("\n\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("*** Movimento cavalo ***\n");
    for (int i = 1; i <= casasCavalo; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\t");
            if (j > 0) {
                printf("Direita\n");
            }
        }
    }

    printf("\n\n");

    printf("*** Movimento cavalo avançado ***\n");
    for(int i = 1, j = 1; i <= casasCavalo * 2; i++, j++) {
        printf("Cima\t");
        if (j % 2 == 0) {
            printf("Direita\n");
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    printf("\n\n");

    printf("*** Movimento bispo recursivo ***\n");
    bispoRecursivo(5);
    
    printf("\n\n");
    
    printf("*** Movimento torre recursivo ***\n");
    torreRecursivo(5);
    
    
    printf("\n\n");
    
    printf("*** Movimento rainha recursivo ***\n");
    rainhaRecursivo(8);

    return 0;
}
