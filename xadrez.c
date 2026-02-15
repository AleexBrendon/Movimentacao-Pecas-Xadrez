#include <stdio.h>

/* =====================================================
   FUNÇÃO RECURSIVA - TORRE
   Move para a direita N casas
   ===================================================== */
void moverTorre(int casas) {

    /* Condição de parada da recursão */
    if (casas <= 0) {
        return;
    }

    printf("Direita\n");

    /* Chamada recursiva reduzindo uma casa */
    moverTorre(casas - 1);
}


/* =====================================================
   FUNÇÃO RECURSIVA - RAINHA
   Move para a esquerda N casas
   ===================================================== */
void moverRainha(int casas) {

    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}


/* =====================================================
   FUNÇÃO RECURSIVA - BISPO
   Movimento diagonal (Cima + Direita)
   Exigência:
   - Recursividade
   - Loops aninhados
   - Loop externo: vertical
   - Loop interno: horizontal
   ===================================================== */
void moverBispo(int casas) {

    if (casas <= 0) {
        return;
    }

    int vertical;
    int horizontal;

    /* Loop externo → movimento vertical */
    for (vertical = 0; vertical < 1; vertical++) {

        printf("Cima\n");

        /* Loop interno → movimento horizontal */
        for (horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    /* Chamada recursiva */
    moverBispo(casas - 1);
}


/* =====================================================
   MOVIMENTO DO CAVALO
   Movimento em L:
   2 casas para CIMA
   1 casa para DIREITA

   Requisitos:
   - Loops aninhados
   - Múltiplas variáveis
   - Uso de break e continue
   ===================================================== */
void moverCavalo() {

    int vertical;
    int horizontal;

    int casasVertical = 2;
    int casasHorizontal = 1;

    /* Loop externo controla movimento vertical */
    for (vertical = 0; vertical < casasVertical; vertical++) {

        printf("Cima\n");

        /* Se ainda não terminou as duas casas verticais,
           continua para próxima iteração */
        if (vertical < casasVertical - 1) {
            continue;
        }

        /* Loop interno executado somente após subir 2 casas */
        for (horizontal = 0; horizontal < casasHorizontal; horizontal++) {

            if (horizontal == casasHorizontal) {
                break;
            }

            printf("Direita\n");
        }
    }
}


/* =====================================================
   FUNÇÃO PRINCIPAL
   ===================================================== */
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
