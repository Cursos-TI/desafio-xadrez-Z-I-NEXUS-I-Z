#include <stdio.h>
// Desafio de Xadrez - MateCheck

int torre = 0;
int bispo = 0;

int main() {
    
    // Loops das movimentações das peças

    while (torre < 5)
    {
        printf ("Torre: Direita\n");
        torre ++;
    }
    printf ("Torre moveu-se cinco casas para a direita.\n\n");

    do
    {
        printf ("Bispo: Cima, direita\n");
        bispo ++;
    }
    while (bispo < 5);
    printf ("Bispo moveu-se cinco casas na diagonal direita.\n\n");

    for (int rainha = 0; rainha < 8; rainha ++)
    {
        printf ("Rainha: Esquerda");
    }
    printf ("Rainha moveu-se 8 casas para a esquerda.\n");

    return 0;
}
