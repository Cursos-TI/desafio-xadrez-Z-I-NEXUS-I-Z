#include <stdio.h>
// Desafio de Xadrez - MateCheck

// Movimento da Torre
void moverTorre(int movTorre) {
    if (movTorre > 0) {
        printf("Torre: Direita.\n");
        moverTorre(movTorre - 1);
    } else {
        printf("Torre moveu-se cinco casas para a direita.\n\n");
    }
}

// Movimento do Bispo
void moverBispo() {
    for (int BispoCima = 5; BispoCima > 0; BispoCima--) {
        printf("Bispo: Cima, direita.\n");
    }
    printf("Bispo moveu-se cinco casas na diagonal direita.\n\n");
}

// Movimento da Rainha
void moverRainha(int movRainha) {
    if (movRainha > 0) {
        printf("Rainha: Esquerda\n");
        moverRainha(movRainha - 1);
    } else {
        printf("Rainha moveu-se 8 casas para a esquerda.\n\n");
    }
}

// Movimento do Cavalo
void moverCavalo(int cavCima) {
    if (cavCima > 0) {
        printf("Cavalo: Cima.\n");
        moverCavalo(cavCima - 1);
    } else {
        printf("Cavalo: Direita.\n");
        printf("Cavalo moveu-se duas casas para cima e uma para a direita.\n\n");
    }
}

int main() {
    int torre = 5, rainha = 8, cavalo = 2;

    // Chamada das funções recursivas dos movimentos
    moverTorre(torre);
    moverBispo();
    moverRainha(rainha);
    moverCavalo(cavalo);

    return 0;
}