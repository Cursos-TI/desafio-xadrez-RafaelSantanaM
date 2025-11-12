#include <stdio.h>
int casa = 0;

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void mov_bispo (int mov){;
    
    if(mov > 0){ //caso base para evitar o loop infinito

    // loops aninhados:
        for(int i = 0; i < mov; i++){
            for(int j = 0; j < mov; j++){
                printf("Casa %d\n", casa);
                printf("Direcao: Cima, Direita\n");
                casa++; //aumentando o valor da casa atual

                mov_bispo(mov - 1); //Chamando a função novamente com o valor mov - 1; para tambem evitar que o loop se torne infinito.
                if(mov > 0){
                    break;
                }
            }
        }
    }
}
void mov_torre(int mov){
    //caso base para evitar o loop infinito: mov > 0. 
    if(mov > 0){
        printf("Casa %d\n", casa);
        printf("Direcao: Direita\n");
        casa++; //aumentando o valor da casa atual
        mov_torre(mov - 1); //Chamando a função novamente com o valor mov - 1; para tambem evitar que o loop se torne infinito.
    }
}

void mov_rainha(int mov){
    if(mov > 0){
        printf("Casa %d\n", casa);
        printf("Direcao: Esquerda\n");
        casa++;
        mov_rainha(mov - 1);
    }
}

void mov_cavalo(){

}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int movi_torre = 5;
    const int movi_bispo = 5;
    const int movi_rainha = 8;
    const int movi_cav_x = 2, movi_cav_y = 1; 
    int escolha_peca, dir_peca;
    // Entrada manual para a peça a ser movida: 
    printf("Digite a peça a ser movida(1 para Torre, 2 para Bispo, 3 para Rainha, 4 para Cavalo): ");
    scanf("%d", &escolha_peca);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    if(escolha_peca == 2){
        // loop do-while:
        mov_bispo(movi_bispo);
    };

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    if(escolha_peca == 1){
        // loop while simples:
       mov_torre(movi_torre);
    };

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    if(escolha_peca == 3){
        // loop for:
        mov_rainha(movi_rainha);
    };

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Primeiro loop(for):
      if(escolha_peca == 4){
          for(int i = 0; i < movi_cav_y; i++){
            do{
                printf("Casa: %d\n", casa);
                printf("Direcao: Baixo\n");
                casa++;
            }while(casa < movi_cav_x);
            printf("Casa: %d\n", casa);
            printf("Direcao: Esquerda\n");
            
        };
    };

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
