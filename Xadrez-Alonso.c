#include <stdio.h>

    int main() {
        
        int casasTorre = 5; // número de casas que a torre vai se mover
       
        printf("Movimento da Torre:\n");
       
        for (int i = 1; i <= casasTorre; i++) {
            printf("Direita\n"); //Torre move-se em linha reta

        }
        printf("\n");

        // Movimento do Bispo 

        int casasBispo = 5; // número de casas que o bispo vai se mover 
        int contadorBispo = 1;
        printf ("Movimento do Bispo:\n");
        while (contadorBispo <= casasBispo) {
            printf("Cima, Direita\n"); // Bispo move-se na diagonal
            contadorBispo ++;

        }
        printf("\n");

        // Movimento da Rainha 

        int casasRainha = 8;  // Número de casas que a rainha vai se mover
        int contadorRainha = 1;
        printf("Movimento da Rainha:\n");

        do {
            printf("Esquerda\n"); // Rainha pode move-se em qualquer direção, aqui só esquerda 
            contadorRainha ++;

        } while (contadorRainha <= casasRainha);


        
    return 0;

    }