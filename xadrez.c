#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int mov_torre = 5;
    const int mov_bispo = 5;
    const int mov_rainha = 8;
    int escolha_peca, dir_peca;
    int casa = 0;
    // Entrada manual para a peça a ser movida: 
    printf("Digite a peça a ser movida(1 para Torre, 2 para Bispo, 3 para Rainha): ");
    scanf("%d", &escolha_peca);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    if(escolha_peca == 2){
        // loop do-while:
        do{
            printf("Casa %d\n", casa);
            printf("Direcao: Cima, Direita\n");
            casa++;
        }while(casa <= mov_bispo);
    };

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    if(escolha_peca == 1){
        // loop while simples:
        while(casa <= mov_torre){
            printf("Casa %d\n", casa);
            printf("Direcao: Direita\n");
            casa++;
        };
    };

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    if(escolha_peca == 3){
        // loop for:
        for(int i = 0; i <= mov_rainha; i++){
            printf("Casa %d\n", i);
            printf("Direcao: Esquerda\n");
        };
    };

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
