#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //------------------------------
    // 1. Movimento do Bispo (while)
    //------------------------------

    /*printf("=== Movimento do Bispo ===\n");
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

    */

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    /*


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

    // -----------------------------------------------------
    // 4. Movimento do Cavalo (loops aninhados)
    // -----------------------------------------------------

    printf("=== Movimento do Cavalo ===\n");
    printf("O Cavalo se move em 'L': duas casas em uma direção e uma perpendicular.\n");
    printf("Simulando movimento do Cavalo: duas casas para Baixo e uma para a Esquerda.\n\n");

    int Baixo = 2;
    int Esquerda = 1;

    for (int i = 1; i <= Baixo; i++) {

        int j = 1;
        while (j <= 1) {
            printf("Movimento %d: Baixo\n", i);
            j++;
        }

        if (i == Baixo) {
            int k = 1;
            do {
                printf("Movimento %d: Esquerda\n", i + k);
                k++;
            } while (k <= Esquerda);
        }
    }

    */

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    /*
-----------------------------------------
   FUNÇÕES RECURSIVAS – TORRE
   Movimento: Apenas para cima (exemplo)
-----------------------------------------
*/

// Função recursiva para mover a torre "n" casas para cima
void moverTorre(int casas) {
    if (casas == 0) {
        return; // Caso base – para recursão
    }

    printf("Cima\n");

    moverTorre(casas - 1); // Chamada recursiva
}



/*
-----------------------------------------
   FUNÇÕES RECURSIVAS – BISPO
   Movimento: Diagonal (Cima + Direita)
   + LOOPS ANINHADOS (requisito do desafio)
-----------------------------------------
*/

// Função recursiva base do bispo
void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima\n");
    printf("Direita\n");

    moverBispoRecursivo(casas - 1);
}

// Bispo com recursão + loops aninhados
void moverBispo(int casas) {

    // Loop externo controla o movimento vertical
    for (int i = 0; i < casas; i++) {

        printf("Cima\n");

        // Loop interno controla o movimento horizontal
        for (int j = 0; j <= i; j++) {
            printf("Direita\n");
        }
    }

    // Separação visual
    printf("\n--- Agora movimento recursivo real ---\n\n");

    moverBispoRecursivo(casas);
}



/*
-----------------------------------------
   FUNÇÕES RECURSIVAS – RAINHA
   Movimento: Cima + Direita (diagonal)
-----------------------------------------
*/

void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima\n");
    printf("Direita\n");

    moverRainha(casas - 1);
}



/*
-----------------------------------------
   LOOPS COMPLEXOS – CAVALO
   Movimento: 2 para cima + 1 para direita
   Uso obrigatório de loops aninhados,
   múltiplas variáveis, continue e break
-----------------------------------------
*/

void moverCavalo() {

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 0; i < movimentosVerticais; i++) {

        // Exemplo de controle com continue
        if (i < 0) {
            continue;
        }

        printf("Cima\n");

        for (int j = 0; j < movimentosHorizontais + 1; j++) {

            // Exemplo de controle com break
            if (j == 1) {
                printf("Direita\n");
                break;
            }

        }
    }
}



/*
-----------------------------------------
                 MAIN
-----------------------------------------
*/

int main() {

    // Valores fixos definidos no código — conforme solicitado
    int casasTorre  = 3;
    int casasBispo  = 3;
    int casasRainha = 3;

    printf("===== TORRE =====\n");
    moverTorre(casasTorre);

    printf("\n\n===== BISPO =====\n");
    moverBispo(casasBispo);

    printf("\n\n===== RAINHA =====\n");
    moverRainha(casasRainha);

    printf("\n\n===== CAVALO =====\n");
    moverCavalo();


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
