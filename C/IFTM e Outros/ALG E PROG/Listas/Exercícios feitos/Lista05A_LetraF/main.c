/*===============================================================


    NOME ALUNO(A): João Victor Barbosa Marques
    CURSO: Eng. Comp.
    1º PERÍODO - DISCIPLINA DE ALGORITMOS
    2 SEMESTRE 2024
    Prof. Ernani Claudio Borges
    data:


    laborar um algoritmo que receba dois números e um o símbolo para representação as operação básicas da
    matemática ( +, - , *, / , ou seja: adição, subtração, multiplicação, divisão) processar e mostrar o
    resultado da operação do primeiro número pelo segundo.
    Obs.:
    a) verificar para que não haja divisão por zero, caso aconteça, dê uma mensagem ao usuário.
    b) Finalizar o algoritmo caso o sinal informado seja diferente dos sinais das operações básicas solicitadas.



*/
//===============================================================
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#include <locale.h>

#define tam1 5
#define tam1 5

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================



//===============================================================
//============== LOCAL PARA CRIAR OS MÓDULOS DE FUNÇÕES =========
//===============================================================



//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    int n, n_limite;
    int cont = 1;

    n = n_limite = 5;

    printf("Digite o número limite: ");
    scanf("%d", &n_limite);
    printf("\n");

    while (n <= n_limite)
    {
        if (cont <= 5)
        {
            printf("%5d", n);
            n = n + 5;
            Sleep(100);
            cont++;
        }
        else
        {
            cont = 1;
            printf("\n");

        }

    }

    //FINALIZAR PROGRAMA
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");

    return 0;
}
