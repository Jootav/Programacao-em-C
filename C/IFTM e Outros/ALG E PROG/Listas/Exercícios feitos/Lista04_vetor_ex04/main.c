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

#define tam 10


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
    //srand(time(NULL));

    //criar vars
    int i, cont, aux;
    float vet_vlcusto[tam], vet_vlvenda[tam], vet_lucro[tam];
    char vet_prod[tam][50];

    //inicializar vars
    for (i=0; i<tam; i++)
        vet[i] = 0;

    //RECEBER PRODUTOS
    i=0;

    receber_produtos(vet_vlcusto, vet_vlvenda, vet_vlcusto);


    //laço principal

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
