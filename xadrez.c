#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //------------------------------
    // 1. Movimento do Bispo (while)
    //------------------------------

    printf("=== Movimento do Bispo ===\n");
    printf("O Bispo se move na diagonal.\n");
    printf("Simulando movimento do Bispo na diagonal Cima e Direita...\n\n");

    int Bispo = 5;
    int Contador = 1;

    while (Contador <= 5)
    {
       printf("%d Cima Direita\n", Contador);
       Contador++;
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    //------------------------------
    // 2. Movimento do Torre (for)
    //------------------------------

    printf("=== Movimento da Torre ===\n");
    printf("A Torre se move em linha reta horizontal ou vertical.\n");
    printf("Simulando movimento da Torre para a direita...\n\n");
    
    int Torre = 5;

    for ( int i = 1; i <= Torre; i++)
    {
        printf("%d Direita\n", i);
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    //------------------------------
    // 3. Movimento do Rainha (do-while)
    //------------------------------

    printf("=== Movimento da Rainha ===\n");
    printf("A Rainha se move em todas as direções.\n");
    printf("Simulando movimento da Rainha para a esquerda...\n\n");

    int Contador2 = 1;
    int Rainha = 8;

    do
    {
        printf("%d Esquerda\n", Contador2); 
        Contador2++; 
    } while (Contador2 <= Rainha);

    printf("\n");
    printf("Fim de Jogo\n");
    
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
