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
        printf ("Rainha: Esquerda\n");
    }
    printf ("Rainha moveu-se 8 casas para a esquerda.\n\n");

    for (int cavEsquerda = 1; cavEsquerda == 1; cavEsquerda ++)
    {
        int cavBaixo = 0;
        while (cavBaixo < 2)
        {
            printf ("Cavalo: Baixo.\n");
            cavBaixo ++;
        }
    }   printf ("Cavalo: Esquerda.\n");
    printf ("O cavalo moveu-se duas casas para baixo e uma para a esquerda.\n\n");

    return 0;
}
