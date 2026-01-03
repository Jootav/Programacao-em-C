

/*
===

Receber duas matrizes (A e B) de dimensão 50 x 50 de elementos do tipo inteiro, processar e
gerar a terceira matrizes (C) de mesma dimensão (50 x 50) da seguinte forma, Pegar os conteúdos da
matriz A e matriz B, e somá-los colocando-os na respectiva posição da matiz C (linha e coluna), ou seja,
linha1xcoluna1 de A + linha1xcoluna1 de B; e assim por diante.
Processar e mostrar:
a) a três matrizes;
b) o valor da soma das linhas pares da matriz C;
c) o valor da soma das colunas impares da matriz C;
d) Permitir que o usuário receba um número para representar uma coluna matriz C (validar corretivamente
durante a entrada para que esse número esteja entre 0 e o tamanho da matriz), processar e mostrar qual
o maior número (valor) desta coluna e em qual linha (índice) ele se encontra.
Obs.: para ajudar na simulação e testes, usar uma matriz 5x5 como exemplo

===
*/

//===



//===



//===

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <math.h>

#define tam1 5
#define tam2 5

int main()
{
    int matA[tam1][tam2], matB[tam1][tam2], matC[tam1][tam2];
    int somacol, somalin;
    int i, j;

    //INICIALIZAR
    i=j=0;
    somalin=somacol=0;

    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            matA[i][j]=rand() % (tam1*tam2*2);
            matB[i][j]=rand() % (tam1*tam2*2);
            matC[i][j]=0;
            j++;
        }
        i++;
    }
    //CÓDIGO
    i=0;
    printf("\n  ============Matriz A===========\n");
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            printf("%6d", matA[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    i=0;
    printf("\n  ============Matriz B===========\n");
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            printf("%6d", matB[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            matC[i][j] = matA[i][j] + matB[i][j];
            j++;
        }
        i++;
    }

    getch();

    i=0;
    printf("\n  ============Matriz C===========\n");
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            printf("%6d", matC[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    i=0;
    while(i<tam1)
    {
        somalin=0;
        j=0;
        while(j<tam2)
        {
            if(i % 2 == 0)
            {
                somalin = somalin + matC[i][j];
            }
            j++;
        }
        if(i % 2 == 0)
            printf("\n Soma da linha par %d = %6d", i, somalin);
        i++;
    }

    j=0;
    while(j<tam2)
    {
        somacol=0;
        i=0;
        while(i<tam1)
        {
            if(j % 2 != 0)
            {
                somacol = somacol + matC[i][j];
            }
            i++;
        }
        if(j % 2 != 0)
            printf("\n Soma da coluna impar %d = %6d", j, somacol);
        j++;
    }
    printf("\n\n\n Acabou...\n\n");
}
