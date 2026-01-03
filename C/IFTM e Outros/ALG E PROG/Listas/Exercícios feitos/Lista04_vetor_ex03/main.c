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

#include <locale.h>

#define tam 50


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
    int vet[tam], i, cont, aux;
    int maior, menor, qtd_maior, qtd_menor;

    //inicializar vars
    for (i=0; i<tam; i++)
        vet[i] = 0;

    //gerar numeros
    i=0;
    while (i < tam)
    {
        vet[i] = rand() % (tam);
        printf ("\n vetor[%d] = %d \n", i+1, vet[i]);
        if (vet[i] == 0)
        {
            printf ("\n zero invalido ... gerar outro ... \n");
            i--;
        }
        i++;
        Sleep(70);
    }

    getch();

    //laço principal

    //VETOR NA SUA FORMA DE ENTRADA

    system("cls");
    printf("\n\n VETOR NA FORMA DE ENTRADA \n\n");
    i=0;
    cont=0;
    while (i < tam)
    {
        if (cont < 5)
        {
            printf("%6d", vet[i]);
            i++;
            cont++;
        }
        else
        {
            cont=0;
            printf("\n");
        }
    }

    //RECEBER OS MAIORES E MENORES VALORES DO VETOR E QTD
    i=0; // APROVEITANDO DO CONT PARA A CONTAGEM
    while (i < tam)
    {
        if (i == 0)
        {
            maior = vet[i];
            menor = vet[i];
        }
        else
        {
            if (vet[i] >= maior)
            {
                maior = vet[i];
            }
            else
            {
                if (vet[i] <= menor)
                    menor = vet[i];
            }
        }
        i++;
    }

    cont = 0;
    while (cont <= tam)
    {
        i = 0;
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

    printf("\n\n VETOR ORDENADO NO MODO DESCRESCENTE \n\n");
    i=0;
    cont=0;
    while (i < tam)
    {
        if (cont < 5)
        {
            printf("%6d", vet[i]);
            i++;
            cont++;
        }
        else
        {
            cont=0;
            printf("\n");
        }
    }
    printf("\n\nO maior número é: %6d", maior);
    printf("\nO menor número é: %6d", menor);

    i=0;
    while (i < tam)
    {
        if (vet[i] == maior)
        {
            printf("\n\n%d aparece na posição %d", maior, i+1);
        }
        if (vet[i] == menor)
        {
            printf("\n%d aparece na posição %d", menor, i+1);
        }
        i++;
    }



    // VETOR ORDEM DECRESCENTE

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
