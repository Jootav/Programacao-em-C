/*
    Lista04_vetor_ex01 – Receber 50 números em um vetor do tipo inteiro (validar para que sejam MAIOR QUE
ZERO). Após receber os 50 números, limpar a tela, mostrar o vetor em forma normal de entrada. Após a
amostragem, receber um (1) número qualquer e procurar no vetor a existência desse número, caso exista
mostrar qual a posição (índice) do vetor ele está (ou em quais posições estão se houver mais de um), caso
não exista esse número, mostrar uma mensagem.
 Fazer de forma que o usuário possa informar outro número de pesquisa, mantendo os números do
vetor de entrada sem

    Prof. Ernani Cláudio Borges
    data: 15/10/2024
==============================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <math.h>

#define tam 30


//==============================================================
//============ LOCAL PARA DECLARAR PROTÓTIPOS ==================
//==============================================================



//==============================================================
//============ LOCAL CRIAR OS MODULOS DE FUNCOES ===============
//==============================================================

//==============================================================


//==============================================================


//==============================================================


//==============================================================


//==============================================================


//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //start do cronometro do time
    srand(time(NULL));

    //criar vars
    int vet[tam], i, n, cont, flag;

    //inicializar vars
    for (i=0; i<tam; i++)
        vet[i] = 0;

    n = 1;
    flag = 0;

    //gerar numeros
    i=0;
    while (i < tam)
    {
        vet[i] = rand() % (tam);
        printf ("\n vetor[%d] = %d", i+1, vet[i]);
        if (vet[i] == 0)
        {
            printf ("\n zero invalido ... gerar outro ... ");
            i--;
        }
        i++;
        Sleep(70);
    }

    //laço principal
    while (n != 0)
    {
        printf ("\n      CONTEUDO DO VETOR \n\n");
        cont = 1;
        i = 0;
        while (i<tam)
        {
            if (cont <= 10)
            {
                printf ("%6d", vet[i]);
                cont++;
                i++;
            }
            else
            {
                cont = 1;
                printf ("\n");
            }
        }

        printf ("\n\n Informe numero de pesquisa ou 0 (zero) para finalizar ..: ");
        fflush(stdin);
        scanf ("%d", &n);

        if (n != 0)
        {
            //pequisar se numero existe
            printf ("\n\n aguarde ... pesquisando ... \n\n");
            i=0;
            while (i<tam)
            {
                if (n == vet[i])
                {
                    printf ("\n numero existe na posicao [%d]", i+1);
                    flag++;
                }
                i++;
            }
            if (flag == 0)
                printf ("\n numero nao esta cadastrado no vetor ... ");

            printf ("\n\n pressione QUALQUER TECLA para continuar ... ");
            getch();
        }
    }

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
