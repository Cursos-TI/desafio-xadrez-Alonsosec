#include <stdio.h>

    #include <stdio.h>

// Função auxiliar para imprimir um movimento
void passo(const char *peca, const char *direcao) {
    printf("%s move para %s\n", peca, direcao);
}

// -------- Torre (recursiva) --------
void mover_torre_recursivo(int passos, const char *direcao) {
    if (passos <= 0) return; // caso base
    passo("Torre", direcao);
    mover_torre_recursivo(passos - 1, direcao); // chamada recursiva
}

// -------- Rainha (recursiva) --------
void mover_rainha_recursivo(int passos, const char *direcao) {
    if (passos <= 0) return;
    passo("Rainha", direcao);
    mover_rainha_recursivo(passos - 1, direcao);
}

// -------- Bispo (loops aninhados) --------
void mover_bispo_diagonal(int casas) {
    for (int i = 0; i < casas; i++) {          // sobe
        for (int j = 0; j < 1; j++) {          // direita
            passo("Bispo", "diagonal direita-cima");
        }
    }
}

// -------- Cavalo (loops com múltiplas variáveis e condições) --------
void mover_cavalo() {
    for (int dx = 2, dy = 1; dx <= 2 && dy <= 1; dx++, dy++) {
        if (dx == 0 || dy == 0) continue; // exemplo de continue
        passo("Cavalo", "em L para cima e direita");
        break; // executa só 1 vez
    }
}

// -------- Programa principal --------
int main() {
    printf("Movimento do Bispo:\n");
    mover_bispo_diagonal(5);

    printf("\nMovimento da Torre:\n");
    mover_torre_recursivo(5, "direita");

    printf("\nMovimento da Rainha:\n");
    mover_rainha_recursivo(8, "esquerda");

    printf("\nMovimento do Cavalo:\n");
    mover_cavalo();

    return 0;
}