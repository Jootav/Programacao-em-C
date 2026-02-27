/*===============================================================

    validar corretivamente durante a entrada para nao
    ter numeros repetidos e nao ter zero.

    1) mostrar vetor em sua forma de entrada
    2) ordenar crescente
    3) mostrar ordenado


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

#define tam 50

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================

//===============================================================

//===============================================================
void ordenar_vetor (int v[])
{
    int i, j, aux;

    for (j=0; j<tam; j++)
    {
        for (i=0; i<tam-1; i++)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}
//===============================================================
void validar_vetor(int v[], int *i)
{
    int j;
    j = 0;
    while (j < *i && v[*i] != v[j])
        j++;

    if (j < *i)
    {
        printf ("\n numero ja existe na posicao indice %d", j);
        (*i)--;
        Sleep(50);
    }
}
//===============================================================
void mostrar_vetor (int v[])
{
    int i, col;
    col = 1;
    i = 0;
    while (i < tam)
    {
        if (col <= 10)
        {
            printf ("%6d", v[i]);
            i++;
            col++;
        }
        else
        {
            printf ("\n");
            col = 1;
        }
    }
}
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //start do cronometro
    srand(time(NULL));


    //CRIAR VARIAVEIS
    int vet[tam], i, j, ok;

    //INICIALIZAR VARIAVEIS
    for (i=0; i<tam; i++)
        vet[i] = 0;

    printf ("\n\n entrada dos numeros no vetor: \n\n");
    i=0;
    while (i<tam)
    {
        vet[i] = rand() % (tam+10);
        printf ("\n vetor[%d] = %d", i, vet[i]);
        //validar repetidos
        //verificar nas posicoes anteriores se esse numero
        //atual existe.
        validar_vetor(vet, &i);
        i++;
    }
    printf ("\n\n vetor em sua forma de entrada \n\n");
    mostrar_vetor(vet);

    //ordenar
    ordenar_vetor(vet);

    printf ("\n\n vetor ordenado \n\n");
    mostrar_vetor(vet);

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
