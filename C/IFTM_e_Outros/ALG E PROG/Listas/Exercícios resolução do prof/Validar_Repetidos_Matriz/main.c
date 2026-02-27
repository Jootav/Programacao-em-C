/*===============================================================

    validar repetidos na matriz.

    NOME ALUNO(A):
    CURSO:
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:

*/
//===============================================================
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define tam1 4
#define tam2 4

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================
void preencher_matriz (int mat[][tam2]);
void mostrar_matriz (int mat[][tam2]);
void ordenar_matriz (int mat[][tam2]);




//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================

//===============================================================

//===============================================================
void ordenar_matriz (int mat[][tam2])
{
    int i, j, c, aux;
    for (c=1; c<=tam1*tam2; c++)
    {
        for (i=0; i<tam1; i++)
        {
            for (j=0; j<tam2-1; j++)
            {
                if (mat[i][j] > mat[i][j+1])
                {
                    aux = mat[i][j];
                    mat[i][j] = mat[i][j+1];
                    mat[i][j+1] = aux;
                }
            }
            if (i<tam1-1) //verificar se tem linha sobrando.
            {
                if (mat[i][j] > mat[i+1][0])
                {
                    aux = mat[i][j];
                    mat[i][j] = mat[i+1][0];
                    mat[i+1][0] = aux;
                }
        }
    }
}
//===============================================================
void mostrar_matriz (int mat[][tam2])
{
    int i, j;
    for (i=0; i<tam1; i++)
    {
        for (j=0; j<tam2; j++)
        {
            printf ("%6d", mat[i][j]);
        }
        printf ("\n");
    }
}
//===============================================================
void preencher_matriz (int mat[][tam2])
{
    int i, j, l, k, c, cont;
    c = cont = l = k = 0;

    i=0;
    while (i<tam1)
    {
        j=0;
        while (j<tam2)
        {
            mat[i][j] = rand() % (tam1*tam2+30);
            printf ("\n matriz[%d][%d] = %d", i, j, mat[i][j]);
            cont++; //contador principal
            Sleep(50);
            if (mat[i][j] <= 0)
            {
                printf ("\n zero invalido ... gerar outro ... ");
                j--; //para voltar na mesma posição e receber outro
                cont--;
            }
            else
            {
                c=1;
                l=0;
                while (l < tam1 && c < cont)
                {
                    k=0;
                    while (k < tam2 && c < cont)
                    {
                        if (mat[l][k] == mat[i][j])
                        {
                            printf ("\n numero %d ja existe em matriz[%d][%d] ... gerar outro ...", mat[i][j], l, k);
                            j--; //para voltar na mesma posição e receber outro
                            c = cont;
                            cont--;
                        }
                        k++;
                        c++;
                    }
                    l++;
                }
            }
            j++;
        }
        i++;

    }

}
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS
    int mat[tam1][tam2], i, j;

    //INICIALIZAR VARIAVEIS
    for (i=0; i<tam1; i++)
        for (j=0; j<tam2; j++)
            mat[i][j] = 0;

    //gerar numero e validar para nao ter zero e nem repetidos.
    printf ("\n\n gerar numeros na matriz ... \n\n");
    preencher_matriz(mat);
    printf("\ni = %d || j = %d", i, j);
    getch();
    printf ("\n\n conteudo da matriz em sua forma de entrada \n\n");
    mostrar_matriz(mat);

    ordenar_matriz(mat);

    printf ("\n\n conteudo da matriz Ordenado crescente \n\n");
    mostrar_matriz(mat);


    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
