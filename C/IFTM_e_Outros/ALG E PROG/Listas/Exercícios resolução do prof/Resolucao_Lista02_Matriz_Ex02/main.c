/*===============================================================

    Lista02_Matriz_Ex02
    papelarias, material e menor preço.

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

#define tam1 6
#define tam2 5


//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================

//===============================================================

//===============================================================

//===============================================================
void mostrar_nomes(char n[][50], int t)
{
    int i;
    for (i=0; i<t; i++)
        printf("\n %s", n[i]);
}
//===============================================================
void entrada_nomes(char n[][50], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        printf ("\n digite nome ...: ");
        do
        {
            fflush(stdin);
            gets(n[i]);
            if (strcmp(n[i], "") == 0)
                printf ("\n nome vazio ... digite algo ...: ");

        }while (strcmp(n[i], "") == 0);
    }
}
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS
    char nm_papelarias[tam1-1][50], nm_material[tam2][50];
    float preco[tam1][tam2];
    int i, j;

    //INICIALIZAR VARIAVEIS
    for (i=0; i<tam1; i++)
        for (j=0; j<tam2; j++)
            preco[i][j] = 0;

    for (i=0; i<tam1-1; i++)
        strcpy(nm_papelarias[i], "");

    for (i=0; i<tam2; i++)
        strcpy(nm_material[i], "");

    //cadastro de papelarias
    printf ("\n\n cadastrar papelarias \n");
    entrada_nomes(nm_papelarias, tam1-1);

    printf ("\n\n cadastrar materiais \n");
    entrada_nomes(nm_material, tam2);

    printf ("\n\n cadastrar precos \n");
    i=0;
    while (i<tam1-1)
    {
        printf ("\n Precos da Papelaria: %s ...: ", nm_papelarias[i]);
        j=0;
        while (j<tam2)
        {
            printf ("\n digite preco do %s ...: ", nm_material[j]);
            do
            {
                fflush(stdin);
                scanf ("%f", &preco[i][j]);
                if (preco[i][j] <= 0)
                    printf ("\n preco invalido ... digite outro ..: ");

            }while (preco[i][j] <= 0);

            //colocar o PRIMEIRO preco na ultima linha
            if (i==0)
                preco[tam1-1][j] = preco[i][j];

            //verificar qual o menor preço
            if (preco[i][j] < preco[tam1-1][j])
                preco[tam1-1][j] = preco[i][j];

            j++;
        }
        i++;
    }

    printf ("\n\n RELATORIO FINAL\n\n");
    printf ("\n Nome das Papelarias \n");
    mostrar_nomes(nm_papelarias, tam1-1);

    printf ("\n\n Nome dos Materiais \n");
    mostrar_nomes(nm_material, tam2);

    printf ("\n\n Precos: \n");
    for (i=0; i<tam1-1; i++)
    {
        for (j=0; j<tam2; j++)
            printf ("%8.2f", preco[i][j]);

        printf ("\n");
    }

    //menor preço e nomes das papelarias
    for (i=0; i<tam2; i++)
    {
        printf ("\n\n menor preco do %s = R$ %.2f", nm_material[i], preco[tam1-1][i]);
        for (j=0; j<tam1-1; j++)
            if (preco[j][i] == preco[tam1-1][i])
                printf("\n %s", nm_papelarias[j]);
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
