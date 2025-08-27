

#include<stdio.h>

int main(void)
{
    //unsigned short linha_tam = 10;
    //unsigned short coluna_tam = 10;
    unsigned short tabuleiro[10][10];
    int navio00[3] = {3, 3, 3};
    int navio01[3] = {3, 3, 3};

    navio00[0] = 3;
    navio01[0] = 3;
    
    //formação do tabuleiro
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }


    //tabuleiro vazio
    /*for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%hu ", tabuleiro[i][j]);
        }
        printf("\n");
    }*/
    
    //posicionamento dos navios
    tabuleiro[0][0] = navio00[0];
    tabuleiro[0][1] = navio00[1];
    tabuleiro[0][2] = navio00[2];

    tabuleiro[6][6] = navio01[0];
    tabuleiro[7][6] = navio01[1];
    tabuleiro[8][6] = navio01[2];
    
    //exibição do tabuleiro
    printf("\n\n");
    printf("Batalha Naval\n");
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%hu ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}