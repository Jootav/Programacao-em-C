/*===============================================================


    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    Data: 08/10/24

    Lista01_vetor_ex01 – Elabore um algoritmo que receba via teclado um vetor numérico de 10 posições, limpar a
    tela, dar uma mensagem e mostrá-los no vídeo.

*/
//===============================================================
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#define tam 10

#include <locale.h>

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================


//===============================================================
//==============  CODIGO PRINCIPAL  =============================
//===============================================================
int main()
{

    setlocale(LC_ALL, "Portuguese");

    //CRIAR VARIAVEIS

    int vet_num[tam];
    int i, qtd_pares, qtd_imp;

    //INICIALIZAR VARIAVEIS

    i = 0;
    while (i < tam)
    {
        vet_num[i] = 0;
        i++;
    }

    qtd_pares = qtd_imp = 0;

    //CÓDIGO

    i = 0;
    while (i < tam)
    {
        printf("Digite o número da posição %d: ", i+1);
        fflush(stdin);
        scanf("%d", &vet_num[i]);
        i++;
    }

    i = 0;
    while (i < tam)
    {
        if (vet_num[i] % 2 == 0)
        {
            qtd_pares++;
        }
        else
        {
            qtd_imp++;
        }
        i++;
    }

    system("cls");

    printf("\n========Conteúdo do vetor========\n\n");

    i = 0;
    while (i < tam)
    {
        printf("%5d", vet_num[i]);
        i++;
    }

    if (qtd_pares == 0)
    {
        printf("\n\nNão houve números pares.\n");
    }
    else
    {
        printf("\n\n========Números pares========\n\n");
        i = 0;
        while (i < tam)
        {
            if (vet_num[i] % 2 == 0)
            {
                printf("%5d", vet_num[i]);
            }
            i++;
        }
    }

    if (qtd_imp == 0)
    {
        printf("\n\nNão houve números impares.\n");
    }
    else
    {
        i=0;
        printf("\n\n========Números impares========\n\n");
        while (i < tam)
        {
            if (vet_num[i] % 2 != 0)
            {
                printf("%5d", vet_num[i]);
            }
            i++;
        }
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
