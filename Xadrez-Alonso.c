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


         // Movimento do Cavalo
        
        printf("\nMovimento do Cavalo:\n");

         int movimentosBaixo = 2;    // Duas casas para baixo
        int movimentosEsquerda = 1; // Uma casa para esquerda

         // Loop externo: cada passo para baixo
         for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");

        // Loop interno (do-while) executa apenas quando terminar as 2 casas para baixo
        if (i == movimentosBaixo - 1) {
            int j = 0;
            do {
                printf("Esquerda\n");
                j++;
            } while (j < movimentosEsquerda);
        }
    }

    return 0;
}