#include <stdio.h>

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i;
    int contador;

    printf("Movimento da Torre:\n");

    for(i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");

    contador = 0;

    while(contador < casasBispo) {
        printf("Cima Direita\n");
        contador++;
    }

    printf("\nMovimento da Rainha:\n");

    contador = 0;

    do {
        printf("Esquerda\n");
        contador++;
    } while(contador < casasRainha);


    return 0;
}
