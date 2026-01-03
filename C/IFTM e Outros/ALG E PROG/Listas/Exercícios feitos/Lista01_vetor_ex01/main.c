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

    float vet_num[10];
    int i;

    //INICIALIZAR VARIAVEIS

    i = 0;
    while (i < 10) // ZERANDO POSIÇÕES
    {
        vet_num[i] = 0;
        i++;
    }

    i = 0;
    while (i < 10)
    {
        printf("Digite o número de posição %d : ", i+1);
        fflush(stdin);
        scanf("%f", &vet_num[i]);
        i++;
    }

    system("cls");

    printf("\n========Conteúdo do vetor========\n\n");
    i = 0;
    while (i < 10)
    {
        printf("%5.0f", vet_num[i]);
        i++;
    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
