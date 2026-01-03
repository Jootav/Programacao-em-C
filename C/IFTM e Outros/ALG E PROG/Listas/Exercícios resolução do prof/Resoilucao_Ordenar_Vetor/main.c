/*===============================================================

    receber um vetor de 100 posições
    a) mostrar o vetor em sua forma de entrada
    b) ordenar o vetor de forma crescente
    c) mostrar o vetor ordenado.


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

//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //start do cronometro (timer)
    //srand(time(NULL));

    //CRIAR VARIAVEIS
    int vet[tam], i, cont, aux;

    //INICIALIZAR VARIAVEIS
    for (i=0; i<tam; i++)
        vet[i] = 0;

    aux = 0;

    //receber numeros  -  GERAR NUMERO RANDOMICAMENTE (ALEATÓRIO)
    for (i=0; i<tam; i++)
    {
        vet[i] = rand() % 61;
        printf ("\n digite vet[%d] ...: %d", i, vet[i]);
        while (vet[i] == 0)
        {
            vet[i] = rand() % 61;
            printf ("\n zero invalido ... gerar outro ...: %d", vet[i]);
        }
        Sleep(50);
    }

    //mostrar o vetor
    printf ("\n\n pressione qualquer tecla para continuar ....");
    getch();

    printf ("\n\n mostrar conteudo do vetor em sua forma de entrada \n");
    cont = 1;
    i=0;
    while (i<tam)
    {
        if (cont <= 5)
        {
            printf ("%6d", vet[i]);
            Sleep(50);
            i++;
            cont++;
        }
        else
        {
            printf("\n");
            cont = 1;
        }
    }

    cont = 1;
    while (cont <= tam)
    {
        i=0;
        while (i < tam-1)
        {
            if (vet[i] < vet[i+1])
            {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
            i++;
        }
        cont++;
    }

    //mostrar o vetor ORDENADO
    printf ("\n\n mostrar conteudo do vetor ORDENADO CRESCENE \n");
    cont = 1;
    i=0;
    while (i<tam)
    {
        if (cont <= 5)
        {
            printf ("%6d", vet[i]);
            Sleep(50);
            i++;
            cont++;
        }
        else
        {
            printf("\n");
            cont = 1;
        }
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
