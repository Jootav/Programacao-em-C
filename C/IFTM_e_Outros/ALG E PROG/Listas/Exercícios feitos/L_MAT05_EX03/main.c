#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <math.h>

#define tam1 5
#define tam2 5

/*
===

Elaborar um algoritmo em Linguagem C) que permita criar uma matriz A de dimensão 50x50, inicializar com zero
todas as posições e logo em seguida, permita o usuário determinar quantas linhas e colunas deseja manipular (dentro das
50x50.
Feito o processo de criação, inicialização e determinadas quantas linhas e colunas, receber os dados da matriz validando
corretivamente para não exista número negativo ou zero.
 Processar e mostrar:

===
*/

//===



//===

void mostrar_mat(int mat[][tam2])
{
    int i, j;
    i = j = 0;

    printf("\n\n Conteudo da matriz na forma de entrada: \n");
    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            printf("%6d", mat[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

//===

int main()
{
    int mat[tam1][tam2];
    int i, j, l, k, flag, ok, c, cont;

    //INICIALIZAR
    i = j = l = k = c = cont = flag = 0;

    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            mat[i][j]=rand() % (tam1*tam2);
            printf("\n matriz[%d][%d] = %d", i, j, mat[i][j]);
            if(mat[i][j] == 0)
            {
                printf("\n zero invalido, gerar outro: ");
                j--;
            }
            Sleep(50);
            j++;
        }
        i++;
    }

    /*
    printf("\n\n quantas linhas deseja manipular? ");
    fflush(stdin);
    scanf("%d", &i_d);
    printf("\n quantas colunas deseja manipular? ");
    fflush(stdin);
    scanf("%d", &j_d);
    */

    //MOSTRAR
    mostrar_mat(mat);

    i=0;
    while(i<tam1)
    {
        j=0;
        while(j<tam2)
        {
            l=0;
            flag=0;
            while(l<i)
            {
                k=0;
                while(k<j)
                {
                    if(mat[i][j] == mat[l][k])
                    {
                        flag++;
                    }
                    k++;
                }
                l++;
            }
            if(flag == 0) // SE NAO TIVER REPETIDO ANTERIORMENTE
            {
                l=i;
                k=j+1;
                cont=1;
                while(l<tam1)
                {
                    while(k<tam2)
                    {
                        if(mat[i][j] == mat[l][k])
                        {
                            ok++;
                            cont++;
                        }
                        k++;
                    }
                    l++;
                    k=0;
                }
                if(cont>1)
                {
                    printf("\n o numero %d apareceu %d vezes", mat[i][j], cont);
                }
            }
            j++;
        }
        i++;
        if(ok == 0)
        {
            printf("\n nenhum numero repetiu.");
        }
    }
}
